#include<iostream>
using namespace std;

int sum(int& num1,int& num2)
{
	return num1+num2;
}

int main()
{
	int x,y;
	cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";	cin>>y;
   cout<<sum(x,y);
   
    
	
}

