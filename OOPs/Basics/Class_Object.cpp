#include<iostream>
using namespace std;

class Student {
public:
    //Instance Variables
    int rollNo;
    string name;
    int grade;
    float marks;
};

int main() {
    Student s;

    cout << "\nEnter roll Number: ";
    cin >> s.rollNo;

    cout << "\nEnter your name: ";
    cin >> s.name;   //word

    cout << "\nEnter your grade: ";
    cin >> s.grade;

    cout << "\nEnter your marks: ";
    cin >> s.marks;
    
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nName: " << s.name;
    cout << "\nGrade: " << s.grade;
    cout << "\nMarks: " << s.marks;

    return 0;
}