#include<iostream>
#include<string.h>
using namespace std;

int main() {
    int roll, phy, chem, comp;
    float total;
    string name, div;

    system("cls");
    cout << "\nInput the Roll Number of the student: ";
    cin >> roll;
    cout << "\nInput the Name of the Student: ";
    cin >> name;
    cout << "\nInput the marks of Physics, Chemistry and Computer Application: ";
    cin >> phy >> chem >> comp;
    total = (phy+chem+comp)/3.0;

    if(total >= 60) {
        div = "First";
    } else {
        if(total < 60 && total >= 48) {
            div = "Second";
        } else {
            div = "Fail";
        }
    }

    cout << "\nRoll No.: " << roll << "\nName of the Student: " << name;
    cout << "\nMarks in Physics: " << phy << "\nMarks in Chemistry: " << chem << "\nMarks in Computer Applications: " << comp;
    cout << "\nTotal Marks: " << (phy+chem+comp) << "\nPercentage: " << total << "\nDivision: " << div;
}
/*
12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First

*/