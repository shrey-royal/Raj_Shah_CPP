#include<iostream>
using namespace std;

class Student {

    //Instance Variables
    int rollNo;
    string name;
    int grade;
    float marks;

public:
    //methods
    void scanDetails() {
        cout << "\nEnter roll Number: ";
        cin >> rollNo;

        cout << "\nEnter your name: ";
        cin >> name;   //word

        cout << "\nEnter your grade: ";
        cin >> grade;

        cout << "\nEnter your marks: ";
        cin >> marks;
    }

    void printDetails() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nGrade: " << grade;
        cout << "\nMarks: " << marks;
    }

};

int main() {
    Student s;
    
    s.scanDetails();
    s.printDetails();

    return 0;
}


/*
Tasks:

> Problem Statement 1: Book Details
Create a program to manage book details using a class named `Book`. The program should allow users to input and display information about books, including title, author, publication year, and ISBN number.

> Problem Statement 2: Employee Information
Develop a program to store and exhibit employee information using a class called `Employee`. Gather details such as employee ID, name, department, and salary. Enable users to input this data and display it afterward.

> Problem Statement 3: Vehicle Records
Design a system to maintain records of vehicles using a class named `Vehicle`. Collect information such as vehicle number, brand, model, and manufacturing year. Implement functions to input and showcase this data.

> Problem Statement 4: Movie Database
Create a program that manages movie records using a class named `Movie`. Collect details like title, director, release year, and genre. Allow users to input this information and display it upon request.

> Problem Statement 5: Bank Account Management
Develop a system to handle bank account information employing a class called `BankAccount`. Gather data like account number, account holder's name, account type, and balance. Enable users to input and exhibit this account data.
*/