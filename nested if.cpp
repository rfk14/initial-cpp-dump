
// Practical 02 || SLO 12.1.3
#include <iostream>
using namespace std;

int main(){
	string pass;
	cout << "Enter Your Password: ";
	cin >> pass;
	if(pass.length() > 8){
		if(pass == "ahsannadir"){
			cout << "Logging In....";
		} else {
			cout << "Password Is Wrong.";
		}
	} else {
		cout << "Password Is Weak.";
	}
}
