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

    printf("\nEnter roll Number: ");
    scanf("%d", &s.rollNo);

    printf("\nEnter your name: ");
    scanf("%s", &s.name);   //word

    printf("\nEnter your grade: ");
    scanf("%d", &s.grade);

    printf("\nEnter your marks: ");
    scanf("%f", &s.marks);
    
    printf("\nRoll No: %d", s.rollNo);
    printf("\nName: %s", s.name);
    printf("\nGrade: %d", s.grade);
    printf("\nMarks: %.2f", s.marks);

    return 0;
}