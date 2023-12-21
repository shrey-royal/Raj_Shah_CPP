#include<iostream>
using namespace std;

int main() {
    int i;

    // for(i=0; i<10; i++) {
    //     if(i%2 == 0) {
    //         cout << i << ", ";
    //     }
    // }

    // i=0;
    // while(i<10) {
    //     cout << i << ", ";
    //     i++;
    // }

    // i=0;
    // do{
    //     cout << i << ", ";
    //     i++;
    // } while(i<10);


    i=0;
    while(i<10) {
        if(i%2 == 1) {
            cout << i << ", ";
        }
        i++;
    }
}