#include <iostream>
using namespace std;

int main() 
{
    int i;
int a[5];
for(i=0; i<5; ++i){
	cout<<"Enter element "<<i+1<<" ";
cin>>a[i];
}
int highest=0;
for (int i = 1; i < ARRAY_SIZE; i++) {
      if (a[i] > highest) {
         highest = numbers[i];
      }
      if (numbers[i] < lowest) {
         lowest = numbers[i];
      }
   }

}
