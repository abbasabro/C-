#include<iostream>
using namespace std;
int power(double n,int p){
	
	for(int i=1;i<p;i++){
		n*=n;
		
		
		
	}
	return n;
}
int main(){
	int num;
	cout<<"Enter Number : ";cin>>num;
	int result=power(num,3);
	cout<<"Power is "<<result;
	
	
	
}
