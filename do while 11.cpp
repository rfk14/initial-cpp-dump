#include <iostream>
using namespace std;

int main() {
    int num;
    do {
        cout << "Enter a number between 1 and 10: ";
        cin >> num;
    } while (num < 1 || num > 10);

    cout << "The number you entered is: " << num << endl;

    return 0;
}

