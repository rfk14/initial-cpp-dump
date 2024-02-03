#include <iostream>
using namespace std;
int main()
{
	int x = 10;
	int* y = &x;
	cout<<"The initial value of X is : "<<x<<endl;
	cout<<"The adress of X is : "<<&x<<endl;
	cout<<"The value assigned to y is : "<<*y<<endl;
	*y=20;
	cout<<endl<<"the of new value of y is : "<<*y<<endl;
}
