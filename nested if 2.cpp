#include<iostream>
using namespace std;
int main()
{
	string pass;
	cout<<"Enter your password"<<endl;
	cin>>pass;
	if (pass.lenght()>8){
		if(pass=="farhan"){
			cout<<"Logging in....";
		}
		else{
		cout<<"Wrong password bitch";
		}
	}
	else{
		cout<<"Password is weak";
	}
	
}
