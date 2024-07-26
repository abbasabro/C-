#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,15,20,25,30};
	int Eindex=0;
	int Oindex=0;
	int size=sizeof(arr)/sizeof(int);
	for(int index=0;index<size;index++){
		
		if(arr[index]%2==0)
		{
			int Even[Eindex]=arr[index];
			Eindex++;
		}
		else
		{
			int Odd[Oindex]=arr[index];
			Oindex++;
		}
		
	}
	cout<<"Even :"<<Even<<endl;
	cout<<"Odd : "<<Odd;
	return 0;
	
	
	
}
