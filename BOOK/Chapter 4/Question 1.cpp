#include<iostream>
using namespace std;
struct phone{
	int Acode;
	int Ecode;
	int num;	
};
int main(){
	phone x;
	phone y={212,767,8900};
	cout<<"Enter Your Number : ";
	cin>>x.Acode>>x.Ecode>>x.num;
	cout<<"My Number is ("<<y.Acode<<")"<<y.Ecode<<" -"<<y.num<<endl;
	cout<<"Your Number is ("<<x.Acode<<")"<<x.Ecode<<" -"<<x.num<<endl;
	return 0;
	
	
	
	
	
	
	
}
