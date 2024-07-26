#include<iostream>
using namespace std;
void Zerosmaller(int& num1,int& num2)
{
	if(num1<num2)
	{
	num1=0;
	cout<<num1;}
	else
	{
	num2=0;
	cout<<num2;}
	
	}
int main()
{
    int x,y;
	cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";	cin>>y;
    Zerosmaller(x,y);
    
}
