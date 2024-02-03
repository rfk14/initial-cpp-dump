#include <iostream>

using namespace std;

double calculateVolume(double length, double width, double height) {
    double volume = length * width * height;
    return volume;
}

int main() {
    double length, width, height;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    cout << "Enter the height of the rectangle: ";
    cin >> height;

    double volume = calculateVolume(length, width, height);

    cout << "The volume of the rectangle is: " << volume << endl;

    return 0;
}

