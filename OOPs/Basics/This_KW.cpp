#include<iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    int grade;
    float marks;

    Student(int id, string name, int grade, float marks) {
        this->id = id;
        this->name = name;
        this->grade = grade;
        this->marks = marks;
    }

    void display() {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s(34, "Raj", 8, 45);
    
    s.display();

    return 0;
}