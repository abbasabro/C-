#include<iostream>
using namespace std;
struct point{
	int xc;
	int yc;
	
};
int main()
{
	point p1,p2,p3;
	
	cout<<"Enter Point coordinates of P1 : ";
	cin>>p1.xc>>p1.yc;
	
	cout<<"Enter Point coordinates of P2 : ";
	cin>>p2.xc>>p2.yc;
	p3.xc=p1.xc+p2.xc;
	p3.yc=p1.yc+p2.yc;
	cout<<"Coordinates of p1+p2 are : ("<<p3.xc<<","<<p3.yc<<")"<<endl;
	return 0;
	
	
	
	
	
}
