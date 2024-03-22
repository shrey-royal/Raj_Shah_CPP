#include<iostream>
using namespace std;


class Rectangle;    //predeclaration of a class

class Circle {
    private:
    double radius;

    public:
    Circle(double radius) {
        this->radius = radius;
    }

    friend bool compareArea(const Circle &circle, const Rectangle &rectangle);
    
    double getArea() const {
        return 3.14 * radius * radius;
    }
};

class Rectangle {
    double length;
    double width;

    public:
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }

    friend bool compareArea(const Circle &circle, const Rectangle &rectangle);
    
    double getArea() const {
        return length * width;
    }
};

bool compareArea(const Circle &circle, const Rectangle &rectangle) {
    return circle.getArea() > rectangle.getArea();
}


int main() {
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    if(compareArea(c, r)) {
        cout << "Area of circle is greater than area of rectangle." << endl;
    } else {
        cout << "Area of circle is smaller than or equal to area of rectangle." << endl;
    }

    return 0;
}