#include<iostream>
using namespace std;
class circle{
	protected:
		int X, Y;
	public:
	    void setV(int a, int b){
	    	X=a;
	    	Y=b;
	    }
	    
};
class sub: public circle{
	public:
	int subt(){
		return X - Y;
	}
	public:
	int dispI(){
	    	return X*Y;
	    }	
};
int main()
{
	sub subb;
	subb.setV(23,1);
	cout<<"The value of X-Y: "<<subb.subt()<<endl;
	cout<<"The value of X*Y: "<<subb.dispI();
	
}
