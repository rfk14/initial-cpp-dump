#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    switch (number) {
        case 1:
            cout << "The number is one." << endl;
            break;
        case 2:
            cout << "The number is two." << endl;
            break;
        case 3:
            cout << "The number is three." << endl;
            break;
        default:
            cout << "The number is not one, two, or three." << endl;
            break;
    }

    return 0;
}

