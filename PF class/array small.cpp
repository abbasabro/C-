#include<iostream>
using namespace std;
int main(){
	int x[]={100,201,50,2312,523,312,3123,50};
	int size=sizeof(x)/sizeof(int);
	int search;
	cin>>search;
	int found=1;
	for(int index=0;index<size;index++)
	{
		if(search==x[index])
		{	
		cout<<"Element Found "<<x[index] <<" @ index : "<<index;
		//break;
	}
	//else
	//found=0;	
}
  /* if(found)
cout<<"\n Element "<<search;
else
cout<<"\n not";
cout<<"\n***************\n";*/
}
