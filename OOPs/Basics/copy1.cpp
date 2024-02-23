// 1. Create a class representing a basic geometric shape (e.g., rectangle) with member variables for dimensions. Implement a copy constructor to initialize a new object with the same dimensions as an existing object.

#include<iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width) {
        this->length = length;
        this->width = width;
    }

    Rectangle(const Rectangle &obj) {
        this->length = obj.length;
        this->width = obj.width;
    }

    double area() {
        return length*width;
    }

    void display() {
        cout << "Length: " << length << "\nWidth: " << width << endl;
    }
};


int main() {
    Rectangle r(5, 3);
    Rectangle r1(r);    //calling copy constructor

    cout << "Dimensions of r" << endl;
    r.display();

    cout << "Dimensions of r1" << endl;
    r1.display();

    cout << "\nArea of rectangle using the given dimensions is " << r.area();

    return 0;
}