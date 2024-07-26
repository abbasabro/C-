#include<iostream>
using namespace std;
int main(){
	int num;
	
	do{
		int result=1;
		cout<<"Enter any number : ";
		cin>>num;
		
		for(int i=num;i>1;i--){

			result*=i;
			
		}
		cout<<"Factorial is "<<result<<endl;
		
		
		
		
		
		
	}while(num!=0);
}
	
	
	

