#include<iostream>
#include<string.h>
using namespace std;

class Student {
    int student_id;
    char name[10];
    int grade;

    public:
        Student() {
            cout << "Default Constructor" << endl;
            student_id = 0;
            for (int i = 0; i < 10; i++) { name[i] = '\0'; }
            grade = 0;
        }

        Student(int stu_id, char n[], int g) {
            student_id = stu_id;
            strcpy(name, n);
            grade = g;

        }

        void printStudentDetails() {
            cout << "Student_ID: " << student_id << endl;
            cout << "Name: " << name << endl;
            cout << "Grade: " << grade << endl;
        }
};



int main() {
    char name[] = "Raj";
    Student s(12, name, 3);

    s.printStudentDetails();



    return 0;
}

/*
> Constructors are the special methods that can be invoked automatically upon the creation of the object.
Constructors are used to initialize the instance variables present in the class.
> if any class don't have any default or parameterized constructor then the compiler will allocate one default constructor by itself.
> In one class we can have multiple constructors

> we have 2 types of constructors: 1. Default Constructor (non parameterized) and 2. Parameterized Constructor
> the constructor must be in the public section of the class

syntax:
1. Default constructor:

public:
    className() {
        //initialize the instance data members
    }

2. Parameterized Constructor:

public:
    className(int a, int b, ...) {
        //initialize the instance data members
    }

Task:
> Make a class for the Employee and put instance variables like emp_id, emp_name, emp_salary, emp_dept(department) then use a parameterized constructor to initialize the data and then print them.
-> you need to print atleast 5 employee details.

*/