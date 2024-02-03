#include <iostream>
using namespace std;

int main() {
  const int ARRAY_SIZE = 5; // Set array size
  int numbers[ARRAY_SIZE]; // Declare array
  int sum = 0; // Initialize sum variable
  int highest = 0; // Initialize highest variable
  int lowest = 0; // Initialize lowest variable
  
  // Loop to populate array and calculate sum
  for (int i = 0; i < ARRAY_SIZE; i++) {
    cout << "Enter a number: ";
    cin >> numbers[i];
    sum += numbers[i];
    
    // Check for new highest and lowest values
    if (i == 0 || numbers[i] > highest) {
      highest = numbers[i];
    }
    if (i == 0 || numbers[i] < lowest) {
      lowest = numbers[i];
    }
  }
  
  // Calculate and output average
  float average = (float)sum / ARRAY_SIZE;
  cout << "Average: " << average << endl;
  
  // Output highest and lowest values
  cout << "Highest value: " << highest << endl;
  cout << "Lowest value: " << lowest << endl;
  
  return 0;
}

