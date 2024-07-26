#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int num;
	int inc=0;
	cout<<"Enter Number : ";cin>>num;
	for(int i=1;i<=20;i++){
	
	for(int j=1;j<=10;j++)
	{
		cout<<(j+inc)*num<<" ";
		
	}
	inc+=10;
	cout<<endl;
}
}
	
