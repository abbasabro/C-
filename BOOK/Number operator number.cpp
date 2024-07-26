#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int a,b;
	float result;
	char ch;
	char key;
	do{
		cout<<"Enter first number, operator, second number : ";
		cin>>a>>ch>>b;
		switch(ch){
			
			case ('+') :result=a+b;break;
			case ('-') :result=a-b;break;
			case ('*') :result=a*b;break;
			case ('/') :result=(float) a/b;break;
			default :result=0;break;
		}
		cout<<"Answer="<<result<<endl;
		cout<<"Do another(y/n)?"<<endl;
		key=getch();
		
	}while(key!='n');
	
	
}
