#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int pop1=2425785,pop2=47,pop3=9761;
	cout<<setw(8)<<"Location"<<setw(12)<<"Population"<<endl<<setw(8)
	<<"Porticity"<<setfill('.')<<setw(12)<<pop1<<endl<<setw(8)<<"Hightown"<<setfill('.')<<setw(12)<<pop2<<endl
	<<setw(8)<<"Lowville"<<setfill('.')<<setw(12)<<pop3<<endl;
	return 0;
	
	
	
	
	
	
}
