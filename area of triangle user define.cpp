#include<iostream>
using namespace std;
float length, breath;
float areaoftriangle(float l, float b)
{
	length=l;
    breath=b;
float area= length*breath/2;
return area;

}

int main()
{
	float l, b, area;
cout<<"Enter breath and length of triangle: ";
cin>>l>>b;
areaoftriangle(l,b);
cout<<"\nThe area of Triangle is: "<<area;
}
