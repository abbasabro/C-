#include<iostream>
using namespace std;
int series(int num){
	num++;
	cout<<num<<endl;
	num++;
	
	if(num<20)
	{
		series(num);
	}
	
}
int main(){
	series(0);
	return 0;
}

