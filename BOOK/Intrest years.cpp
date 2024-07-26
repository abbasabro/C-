#include<iostream>
using namespace std;
int main(){
	float y,irate,result;
	
	int x;
	
	cout<<"Enter Initial ammount : ";cin>>x;
	cout<<"Enter Number of Final amount you want : ";cin>>y;
	cout<<"Enter Intrest rate in percent : ";cin>>irate;
	irate/=100;
	result=y*irate;
	x/=result;
	cout<<"Total Number of years for "<<y<<" are "<<x<<" Years."<<endl;
	return 0;
	
}
