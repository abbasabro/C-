#include<iostream>
using namespace std;
int  main(){
	int sum=0;
for(int i=60;i>=5;)
{
	cout<<i<<"  ";
	sum+=i;
	if (sum==210 || sum==130 || sum==50)
	{
	cout<<sum<<endl;
	sum=0;}
	i-=5;
	
}

return 0;







}
