#include <iostream>
using namespace std;

int main()
{
	int iit=4, sum, average, i;
	int numbers[4];
	for(i; i<iit; i++){
		cout<<"Enter elements of the array: "<<" "<<i+1<<endl;
		cin>>numbers[i];
		
	}
	sum+=numbers[i];
	cout<<"you entered : ";
		for(int i=0; i<iit; i++){
		cout<<numbers[i]<<" ";
		
	}
	
	average=sum/iit;
	cout<<"The average of the numbers is : "<<average;
}
