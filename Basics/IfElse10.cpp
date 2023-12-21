#include<iostream>
using namespace std;

int main() {
    int math, phy, chem, totalof3, totalof2;

    system("cls");  //clears the terminal screen
    cout << "\nEnter the marks for math: ";
    cin >> math;
    cout << "\nEnter the marks for phy: ";
    cin >> phy;
    cout << "\nEnter the marks for chem: ";
    cin >> chem;
    totalof3 = math+phy+chem;
    totalof2 = math+phy;

    if(math >= 65 && phy >= 55 && chem>=50) {
        if(totalof3 >= 190 || totalof2 >= 140) {
            cout << "\nThe candidate is eligible for admission.";
        } else {
            cout << "\nThe candidate is not eligible.";
        }
    } else {
        cout << "\nThe candidate is not eligible.";
    }


    return 0;
}

/*
10. Write a C program to determine eligibility for admission to a professional course based on the following criteria: 
Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 
------------------------------------- 
Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 
The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.

*/