#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b,c,d;
	char ch,op,key;
	int resultnume,resultdenom;
	do{
	cout<<"Enter first Fraction : ";
	cin>>a>>ch>>b;
	cout<<"Enter Second Fraction : ";
	cin>>c>>ch>>d;
	cout<<"Enter Opertion to perform (+,-,*,/)";
	cin>>op;
	switch(op){
		case '+':resultnume=(a*d+b*c);resultdenom=(b*d);
			break;
			case '-':resultnume=(a*d-b*c);resultdenom=(b*d);
			break;
		case '*':resultnume=(a*c);resultdenom=(b*d);
			break;
			
		case '/':resultnume=(a*d);resultdenom=(b*c);
			break;
			default :cout<<"invalid input";break;
		
		}
		cout<<"Answer="<<resultnume<<ch<<resultdenom<<endl;
		cout<<"Do you want another(y/n)."<<endl;
		key=getch();
		
	}while(key!='n');
	
}
	
	
	
	

