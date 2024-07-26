#include<iostream>
using namespace std;
int main(){
	int y[]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
	int size=sizeof(y)/sizeof(int);
	int search;
	cin>>search;
	int found=1;
	int counter=0;
	for(int i=0;i<size;i++)
	{
		if(search==y[i])
		{
			cout<<"Element found "<<search<<" in array at "<<i<<endl;
			counter++;
			found=1;
		}
				else{
					found=0;
				}
	}
	if(found=1)
		cout<<"Number of times repeated ="<<counter;
	else 
	cout<<"Element not found.";
}
