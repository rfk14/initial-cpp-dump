#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream outputFile("output.txt"); // Open file for writing

    if (!outputFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    char character;

    cout << "Enter characters (type '#' to stop):" << endl;

    while ((character = cin.get()) != '#') {
        outputFile.put(character); // Write character to file
    }

    outputFile.close(); // Close the file

    cout << "Data written to file 'output.txt'." << endl;

    return 0;
}

