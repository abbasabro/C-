#include<iostream>
using namespace std;
int main()
{
	int x;
	int result=1;
	cout<<"Enter any number : ";
	cin>>x;
	for(int i=x;i>=1;i--){
		result*=i;
		
	}
	cout<<"Factorial="<<result;
	return 0;
	
}
