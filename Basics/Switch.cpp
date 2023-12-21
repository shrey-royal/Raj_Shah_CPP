#include<iostream>
using namespace std;

int main() {
    char choice;

    system("cls");
    cout << "\nEnter any character: ";
    cin >> choice;

    switch(choice) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "\nLetter is Vowel";
            break;

        default:
            cout << "\nLetter is Consonant";
    }
    return 0;
}
/*
1. Get character as input and check whether vowel / consonant Using SWITCH CASE
Output :-
Enter any character : c
Letter is consonant

*/