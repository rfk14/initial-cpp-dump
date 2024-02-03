#include <iostream>
using namespace std;
int main()
{
	string pass = "farhan";
	string input;
	int limit=0;
	cout<<"Enter your password"<<endl;
	while (limit<3){
		cin>>input;
		if (pass==input){
			cout<<"loging in....."<<endl;
		}
		else{
			cout<<"try again please"<<endl;
			 limit++;	
		}
	}
	if(limit==3){
		cout<<"you have reached the limit of trying..."<<endl;
	}
}
