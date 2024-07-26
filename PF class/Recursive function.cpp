#include<iostream>
using namespace std;
int re(int x[1]){
	
	if(x[0]>=0){
	
		cout<<"Enter  any number :";
		cin>>x[0];
		re(x); 
}
		
	}
	
	

int main(){
	int num[1];
	re(num);
	return 0;
	
	
}
