#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
	string uname;
	string pass;
	int counter=0;	
	do{
	
		cout<<"Enter Username : ";cin>>uname;
		cout<<"Enter password : ";cin>>pass;
		if(pass!="gm123")
		{cout<<"Incorrect password.";
		cout<<endl;
		}
		if(uname!="abbas")
		{cout<<"Incorrect username.";
		cout<<endl;
		}
		counter++;		
		if(counter==4){
		
		cout<<"Wait for 5 sec...";
		sleep(5);
		cout<<endl;
	}
	}while(uname!="abbas" || pass!="gm123");
	cout<<"Login Sucessful";
	
	
}
