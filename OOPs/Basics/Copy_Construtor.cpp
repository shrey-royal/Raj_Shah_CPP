#include<iostream>
using namespace std;

class A {
public:
    int x;

    A(int a) {  //parameterized
        x = a;
    }

    A(A &i) {   //copy constructor
        x = i.x;
    }
};

int main() {
    A a1(20);
    A a2(a1);
    cout << a2.x;
}

/*
A Copy constructor is used to initialize new object using another object.

Tasks:

1. Create a class representing a basic geometric shape (e.g., rectangle) with member variables for dimensions. Implement a copy constructor to initialize a new object with the same dimensions as an existing object.
  
2. Develop a class to model a simple bank account with attributes such as account number, balance, and owner's name. Write a copy constructor to duplicate an existing account object.

3. Define a class to represent a student with attributes like name, roll number, and marks in three subjects. Implement a copy constructor to clone an existing student object.

4. Construct a class representing a book with attributes like title, author, and publication year. Write a copy constructor to create a duplicate book object.

5. Design a class to represent a point in 2D space with x and y coordinates. Implement a copy constructor to duplicate a given point object.

6. Create a class to model a simple shopping cart with items and their quantities. Write a copy constructor to replicate an existing shopping cart object.

7. Define a class to represent a date with attributes for day, month, and year. Implement a copy constructor to duplicate a given date object.

8. Develop a class to represent a simple employee with attributes like name, employee ID, and salary. Write a copy constructor to clone an existing employee object.

9. Construct a class representing a basic music player with attributes for song title, artist, and duration. Implement a copy constructor to duplicate a given music player object.

10. Design a class to represent a basic car with attributes like make, model, and year. Write a copy constructor to create a duplicate car object.

*/