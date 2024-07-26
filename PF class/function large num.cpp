#include<iostream>
using namespace std;
int Largernum(int,int);
int Largernum(int num1,int num2)
{
	return(num1>num2)?num1:num2;
}
int main()
{
	int x,y;
	cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";	cin>>y;
    cout<<"Larger Number is "<<Largernum(x,y);
}
