/*
this is a keyword that referes to the current instance of the class.

Usage of this keyword:
-> it can be used to pass current object as a parameter to another method.
-> it can be used to refer current class instance variables.
-> it can be used to declare indexes.
*/

#include<iostream>
using namespace std;

class Employee {
    public:
        int id;
        string name;
        float salary;

        Employee(int id, string name, float salary) {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        void display() {
            cout << "Id: " << id << "\tName: " << name << endl;
        }
};

int main() {
    Employee e1 = Employee(101, "Raj", 8900);
    Employee e2 = Employee(102, "Nakul", 5600);

    e1.display();
    e2.display();
}