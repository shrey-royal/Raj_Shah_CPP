#include<iostream>
using namespace std;

class Convert {
    public:
        float mile_kms(float miles) {
            //1 mile =  1.6 kms
            return miles*1.6;
        }
};

int main() {
    float miles;

    cout << "\nEnter miles: ";
    cin >> miles;

    Convert c;

    cout << c.mile_kms(miles);

    return 0;
}