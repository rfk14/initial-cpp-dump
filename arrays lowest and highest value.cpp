#include <iostream>
using namespace std;

int main() 
{
   const int ARRAY_SIZE = 5;
   int numbers[ARRAY_SIZE] = {10, 5, 7, 12, 3}; // example array

   int highest = numbers[0];
   int lowest = numbers[0];

   for (int i = 1; i < ARRAY_SIZE; i++) {
      if (numbers[i] > highest) {
         highest = numbers[i];
      }
      if (numbers[i] < lowest) {
         lowest = numbers[i];
      }
   }

   cout << "The highest value is: " << highest << endl;
   cout << "The lowest value is: " << lowest << endl;

   return 0;
}
