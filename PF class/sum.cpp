#include<iostream>
using namespace std;

void sum(int& num1,int& num2)
{
	int add=num1+num2;
	cout<<add;
}

int main()
{
	int x,y;
	cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";	cin>>y;
   sum(x,y);
   
    
	
}

