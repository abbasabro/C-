#include<iostream>
using namespace std;
int main()
{
	int num;
	int isprime=1;
	cout<<"Enter number : ";cin>>num;
	for(int i=2;i<num;i++){
		if(num%i==0)
		{isprime=0;
		break;
		}
		
	}
	if(isprime==1)
	{cout<<num<<" is Prime number.";
	}
	else{
		cout<<num<<" is not a Prime number.";
	}
	return 0;
}
