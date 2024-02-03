#include <iostream>
#include <string>

using namespace std;

int main() {
    string password = "mypassword";
    string input;
    int tries = 0;
    
    while (tries < 3) {
        cout << "Please enter your password: ";
        cin >> input;
        if (input == password) {
            cout << "Logging in." << endl;
            break;
        } else {
            cout << "Incorrect password. Please try again." << endl;
            tries++;
        }
    }
    
    if (tries == 3) {
        cout << "Too many attempts. Program terminated." << endl;
    }
    
    return 0;
}

