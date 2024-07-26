#include<iostream>
using namespace std;
int main(){
	int y;
	float irate;
	float x;
	cout<<"Enter Initial ammount : ";cin>>x;
	cout<<"Enter Number of Years : ";cin>>y;
	cout<<"Enter Intrest rate in percent : ";cin>>irate;
	irate/=100;
	
	for(int i=1;i<=y;i++){
		x+=x*irate;
		cout<<"Year"<<i<<"="<<x<<endl;
		
		
		
		
	}
cout<<"Total Amount after "<<y<<" Years is "<<x<<endl;
	return 0;
	
	
	
}
