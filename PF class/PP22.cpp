#include<iostream>
using namespace std;
struct Data{
	int day;
	int month;
	int year;
};
int main(){
	Data D1={1,5,2023};
	D1.day+=15;
	D1.month+=1;
	cout<<"Resulting date="<<D1.day<<"-"<<D1.month<<"-"<<D1.year;
	
	
	return 0;	
}
