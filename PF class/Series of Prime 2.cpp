#include<iostream>
using namespace std;
int  main(){
	int num;
	cout<<"Enter number to print Prime : ";cin>>num;
	for(int i=2;i<=num;i++){
		int counter=0;
		for(int b=1;b<=i;b++){
			if(i%b==0)
			{
			counter++;}
			
		}
		if(counter<=2)
		cout<<i<<"   ";
	}
		
	
	return 0;
}
	
	

