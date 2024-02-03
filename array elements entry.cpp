#include <iostream>
using namespace std;
int main()
{
	int sum, array_size = 5, i, high = 0, low = 0;
	int a[array_size];
	for(i = 0; i < array_size; ++i){
		cout<<"Enter array Element : "<<i + 1<<" "<<endl;
		cin>>a[i];
		sum+=a[i];
	}
	cout<<"average of array is : "<<sum/array_size<<endl;
   if (i == 0 || a[i] > high) {
      high = a[i];
      	cout<<"highest value is: "<<high;
    }

}
