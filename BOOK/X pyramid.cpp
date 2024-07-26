#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int ch=20;
 for(int i=1;i<=20;i++){
	cout<<setw(ch);
	for(int j=1;j<=2*i-1;j++){
		cout<<"X";
		
		
	}
	cout<<endl;
	ch--;
	
	
}
return 0;
}
