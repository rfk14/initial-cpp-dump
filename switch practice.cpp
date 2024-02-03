#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cout<<"Enter number 1 and 2 : "<<endl;
	cin>>num1>>num2;
	cout<<"Enter a oprator that has to be used (*, /, +, -)"<<endl;
	cin>>op;
	
	switch(op){
		case '*':
			cout<<"The product of numbers is : "<<num1*num2;
			break;
		case '+':
			cout<<"The sum of numbers is : "<<num1+num2;
			break;
		case '/':
			cout<<"The dividend of numbers is : "<<num1/num2;
			break;
		case '-':
			cout<<"The difference of numbers is : "<<num1-num2;
			break;	
					
	}
	
}
