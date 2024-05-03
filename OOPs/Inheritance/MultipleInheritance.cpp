#include<iostream>
using namespace std;

class Add {
public:
    int x = 20;
    int y = 30;

    void add() {
        cout << "The add of " << x << " and " << y << " is " << x+y << endl;
    }
};

class Sub {
public:
    int x = 50;
    int y = 30;

    void sub() {
        cout << "The sub of " << x << " and " << y << " is " << x-y << endl;
    }
};

class Mul {
public:
    int x = 20;
    int y = 30;

    void mul() {
        cout << "The mul of " << x << " and " << y << " is " << x*y << endl;
    }
};

class Div {
public:
    int x = 150;
    int y = 30;

    void div() {
        cout << "The div of " << x << " and " << y << " is " << x/y << endl;
    }
};

class Modulus : public Add, public Sub, public Mul, public Div {
public:
    int x = 12;
    int y = 5;

    void mod() {
        cout << "The modulus of " << x << " and " << y << " is " << x%y << endl;
    }
};

int main() {
    Modulus m;

    m.add();
    m.sub();
    m.mul();
    m.div();
    m.mod();

    return 0;
}