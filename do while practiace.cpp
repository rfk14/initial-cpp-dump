#include <iostream>

using namespace std;

int main() {
    int num;

    do {
        cout << "Enter a number: ";
        cin >> num;
    } while (num <= 10);

    cout << "The number you entered is greater than 10." << endl;

    return 0;
}
