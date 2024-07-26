#include<iostream>
using namespace std;

void swap(int& num1,int& num2)
{
	int z=num1;
	num1=num2;
	cout<<"First Number="<<num1<<endl;
	
	cout<<"Second Number="<<z;

}

int main()
{
	int x,y;
	cout<<"Enter first Number : ";cin>>x;
    cout<<"Enter second Number : ";	cin>>y;
   swap(x,y);
   
    
	
}

