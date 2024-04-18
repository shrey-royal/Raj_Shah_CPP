#include<iostream>
using namespace std;

class Animal {
protected:
    string name;
    string breed;
    int age;
    string color;

public:
    Animal(string n, string b, int a, string c) {
        name = n;
        breed = b;
        age = a;
        color = c;
    }
};

class Dog : public Animal {
public:
    Dog(string name, string breed, int age, string color) : Animal(name, breed, age, color) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Breed: " << breed << endl;
        cout << "Age: " << age << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Dog d("Tommy", "Bulldog", 7, "Black");

    d.display();

    return 0;
}