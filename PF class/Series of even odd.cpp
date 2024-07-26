#include<iostream>
using namespace std;
int main(){
	cout<<"EVEN\tODD";
	for(int x=0;x<=20;x++){
		if(x%2==0)
		cout<<endl<<x;
		else
		cout<<"\t"<<x;
	}
	return 0;
}
