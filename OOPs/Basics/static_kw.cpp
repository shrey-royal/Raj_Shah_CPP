#include<iostream>
using namespace std;

class Account {
public:
    int accno;
    string name;
    static float rateOfInterest;
    Account(int accno, string name) {
        this->accno = accno;
        this->name = name;
    }

    void display() {
        cout << "Account No." << accno << endl;
        cout << "Name: " << name << endl;
        cout << "Rate Of Interest: " << rateOfInterest << endl;
    }
};

//initialize the static member (:: scope resolution operator)
float Account::rateOfInterest = 6.5;

int main() {
    Account a1 = Account(201, "Raj");
    Account a2 = Account(202, "Raju");

    a2.rateOfInterest = 3;

    a1.display();
    a2.display();

    return 0;
}

/*
Static is a keyword or modifier that belongs to the type not instance. SO instance is not required to access the static memebers.

The memory of static member will be allocated once and shared among all the objects.

*/