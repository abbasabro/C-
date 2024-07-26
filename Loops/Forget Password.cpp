#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char key;
	string uname;
	string pass;
	string uname2;
	string pass2;
	string fgpass;
	string fgpass2;
	do{
		cout<<"1-Create Account. "<<endl;
		cout<<"2-Sign in."<<endl;
		cout<<"3-Forget password "<<endl;
		cout<<"Press Q to exit."<<endl;
		key=getch();
		if(key=='1')
		{
			cout<<"Set Email : ";cin>>uname;
			cout<<"Select Password : ";cin>>pass;
			cout<<"What was Place of birth : ";
			cin.ignore();
			getline(cin,fgpass);
			
		}
		else if(key=='2')
		do{
		cout<<"Enter Email : ";cin>>uname2;
		cout<<"Enter Password : ";cin>>pass2;
		if(uname!=uname2 || pass!=pass2){
		
		cout<<"Incorrect Username or Password."<<endl;
		break;
		}
		
		
		}while(uname!=uname2 || pass!=pass2);
		else if (key=='3')
		{
		cout<<"Your Place of birth : ";cin>>fgpass2;
	
		if(fgpass==fgpass2)
        cout<<"Enter New Password : ";cin>>pass;	
				
		
}
		
	}while(key!='q' && uname!=uname2 || pass!=pass2);

cout<<"Login Successfull.";




}

