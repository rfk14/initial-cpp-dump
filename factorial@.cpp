#include <iostream>
using namespace std;

int fact(int i)
{
		int factorial=1;
	for(i; i>=1; --i){

	 factorial *= i;
	}
	return factorial;
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"factorial is: "<<fact(num);

}
