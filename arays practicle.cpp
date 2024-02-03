#include <iostream>
using namespace std;

int main(){
	int num[5], min, max, j, k;
	float avg;
	cout << "Enter 5 Numbers: \n";
	for (int i = 0; i < 5; ++i){
		cout << "Number " << i + 1 << ": ";
		cin >> num[i];
		avg += num[i];
	}
	avg /= 5;
	max = num[0];
	min = num[0];
	for (j = 1, k = 1; j <= 4; ++j){
		if(num[j] > max){
			max = num[j];
		}
		if (num[j] < min){
			min = num[j];
		}
	}
	cout << endl << "Minimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	cout << "Average: " << avg;
}
