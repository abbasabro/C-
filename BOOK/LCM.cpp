#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	int nume,denom;
	char ch='/';
	cout<<"Enter First Fraction : ";
	cin>>a>>ch>>b;
	cout<<"Enter Second Fraction : ";
	cin>>c>>ch>>d;
	nume=a*d+b*c;
	denom=b*d;
	cout<<"Sum="<<nume<<ch<<denom;
	return 0;
	
	
	
	
}
