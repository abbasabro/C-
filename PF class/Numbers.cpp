#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	for(int i=1;i<=16;i++){
	cout<<i<<"  ";
	sum+=i;
	
	if(i==4 || i==8 || i==12 || i==16)
	{
	cout<<sum<<endl;
	sum=0; 

}
	}
	return 0;
		
}
