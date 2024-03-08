#include<iostream>
using namespace std;

class Student {
    public:
    int rollNo;
    string name;
    float fees;

    Student(int rollNo, string name, float fees) {
        cout << "Constructor called!" << endl;
        this->rollNo = rollNo;
        this->name = name;
        this->fees = fees;
    }

    void display() {
        cout << "RollNo: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Fees: " << fees << endl;
    }

    //Destructor
    ~Student() {
        cout << "Destructor called!" << endl;
    }
};


int main() {
    Student s(23, "Raj", 5000);
    s.display();

    return 0;
}

/*
Destructor works opposite to contructor, it destrcuts the objects of classes. it can be defined only once in the class. Like constructors, it is invoked automatically

syntax:
    ~ClassName() {
        //
    }
*/