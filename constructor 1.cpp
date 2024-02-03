#include <iostream>
using namespace std;

class Sarea{
	protected:
		int width, length;
	public:
		Sarea(int a, int b){ //constructor
			width=a;
			length=b;
		}
		int Svol(){//member function
			return width*length;
		}
};

int main()
{
	Sarea ar(2,3);
	cout<<"The area is given by: "<<ar.Svol();
}
