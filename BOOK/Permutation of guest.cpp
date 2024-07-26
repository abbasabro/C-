#include<iostream>
using namespace std;
int main(){
	int c;
	int g;
	int result=1;
	cout<<"Enter Number of guests : ";cin>>g;
	cout<<"Enter Number of chairs : ";cin>>c;
	for(int i=1;i<=c;i++){
		result*=g;
		--g;
	}
	cout<<"Number of Possible Ways are "<<result<<endl;
	return 0;
	
}

