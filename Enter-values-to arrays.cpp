#include <iostream>

using namespace std;

int main() {
    const int ARRAY_SIZE = 5;  // Define the size of the array
    int numbers[ARRAY_SIZE];   // Declare the array to store the numbers

    // Use a for loop to input values into the array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> numbers[i];
    }

    // Initialize the variables to store the highest, lowest, and average values
    int highest = numbers[0];
    int lowest = numbers[0];
    int sum = numbers[0];

    // Use a for loop to find the highest, lowest, and average values
    for (int i = 1; i < ARRAY_SIZE; i++) {
        if (numbers[i] > highest) {
            highest = numbers[i];
        }
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
        sum += numbers[i];
    }

    // Calculate the average value
    double average = static_cast<double>(sum) / ARRAY_SIZE;

    // Output the results
    cout << "Highest value: " << highest << endl;
    cout << "Lowest value: " << lowest << endl;
    cout << "Average value: " << average << endl;

    return 0;
}