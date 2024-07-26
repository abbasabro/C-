#include<iostream>
using namespace std;
int func(int n){
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*func(n-1);
	}
}
int main(){
	int n;
	cout<<"Enter any number :";
	cin>>n;
	int fact=func(n);
	cout<<"Factorial of "<<n<<" is "<<fact;
	return 0;
}
