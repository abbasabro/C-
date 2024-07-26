#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int w=0;
	int a=0;
	int s=0;
	int d=0;
	char key;
	int reward=0;
	do
	{
		cout<<"\t\tINSTRUCTIONS\t\n";
		cout<<"Enter W to move north \n";
			cout<<"Enter A to move  east\n";
				cout<<"Enter s to move north \n";
					cout<<"Enter d to move west \n";
					cout<<"Enter q to exit.\n";
					cout<<"Collect 10 Rewanrds to complete\n";
					cout<<"Your currnet location : "<<"North="<<w<<"South="<<s<<"East="<<a<<"West="<<d<<"\t\t\t\tRewards:"<<reward<<endl;
					key=getch();
		if(key=='w'){
		
		++w;
		--s;
		system("cls");
		}
		else if(key=='s'){
		
		++s;
		--w;
		system("cls");}
		else if(key=='a'){
		
		++a;
		--d;
		system("cls");}
		else if(key=='d'){
		++d;
		--a;
		system("cls");}
		
		else{
		
		continue;
		system("cls");
		}
		if(w==2 && a==2 || a==2 && s==1 || w==1 && a==2 || d==1 && s==2 || d==-2 && a==3 || w==3 && a==6 || a==7 && s==5 || w==13 && a==3 || d==5 && s==10 || d==-9 && a==10 || w==-8 && a==-6 || a==-6 && s==-7 || w==14 && a==-15 || d==11 && s==-12 || d==-2 && a==-15)
		++reward;

		
	}while(key!='q' && reward!=10);
	if(key=='q')
	cout<<"Thanks for Playing."<<endl;
	else
	cout<<"Congrats You Finished the game."<<endl;
	return 0;	
}
