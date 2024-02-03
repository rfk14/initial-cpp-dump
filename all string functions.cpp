#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[50], str2[50], result[100];
    int len1, len2, cmp;

    // strcpy
    cout << "Enter a string: ";
    cin >> str1;
    strcpy(result, str1);
    cout << "Copy of the string: " << result << endl;

    // strcat
    cout << "Enter another string: ";
    cin >> str2;
    strcat(result, str2);
    cout << "Concatenation of the two strings: " << result << endl;

    // strlen
    len1 = strlen(str1);
    len2 = strlen(str2);
    cout << "Length of the first string: " << len1 << endl;
    cout << "Length of the second string: " << len2 << endl;

    // strcmp
    cmp = strcmp(str1, str2);
    if (cmp == 0) {
        cout << "The two strings are equal." << endl;
    } else if (cmp < 0) {
        cout << "The first string is less than the second string." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}

