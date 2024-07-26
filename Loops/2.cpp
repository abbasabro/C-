#include<iostream>
using namespace std;
void starline(int x);
int main(){
	starline(20);
	cout<<"\nEven\tODD";
	for(int i=0;i<=20;i++)
	{
		if(i%2==0){

		cout<<endl<<i;
		}else 
		cout<<"\t"<<i<<endl;
	}
	
	
	
}
void starline(int x){
      for(int i=1;i<=x;i++)
      cout<<"*";
}
