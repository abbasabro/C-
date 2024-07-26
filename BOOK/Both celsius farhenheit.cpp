#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char key;
	float c;
	float f;
	cout<<"1 to convert Farenheit to celsius."<<endl;
	cout<<"2 to convert celsius to Farenheit."<<endl;
	key=getch();
	if(key=='1'){
		cout<<"Enter Farenheit : ";
		cin>>c;
		cout<<"Its celsius is : "<<((9*c)/5)+32;
	
	}
	else if(key=='2'){
	
	 	cout<<"Enter Celsius : ";
	 	cin>>f;
		cout<<"Its Farhenheit is  "<<(5*(f-32))/9;
}	
}
