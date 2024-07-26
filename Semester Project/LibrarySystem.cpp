#include<iostream>
#include<conio.h>
#include<unistd.h>
#include<vector>
using namespace std;
void clear();
class Library{
	private:
		int n;
		string book_name; 
		string uname;
		string pass;
		string book_subject;
		string std_name;
		string issue_date;
		string return_date;
		int ret_time_period;
		vector<Library> vec;
		vector<Library> vector_issue;
		vector<Library> vector_return;
		
		int quantity;
	public:
		    bool Adminpage(){
		            cout<<"\t\t\t|===============================|"<<endl;	
	            	cout<<"\t\t\t|       ADMIN PORTAL            |"<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl;
	               	cout<<"\t\t\t|        1.Add Books.           |"<<endl;
		            cout<<"\t\t\t|        2.Available Books.     |"<<endl;
		            cout<<"\t\t\t|        3.Back.                |"<<endl;
		            cout<<"\t\t\t|===============================|"<<endl;
                    return true;			
			}//End of adminpage
			void developer(){
				    cout<<"\t\t\t|===============================|"<<endl;	
	            	cout<<"\t\t\t|        PF PROJECT             |"<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl;
	               	cout<<"\t\t\t|        NAME:ABBAS ALI         |"<<endl;
		            cout<<"\t\t\t|        ROLL NO.:23SW056       |"<<endl;
		            cout<<"\t\t\t|        SUBMITED TO:SIR SAJJAD |"<<endl;
		            cout<<"\t\t\t|===============================|"<<endl;
			}//end of developer
			void Studentpage(){
				    cout<<"\t\t\t|===============================|"<<endl;	
	            	cout<<"\t\t\t|        STUDENT PORTAL         |"<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl<<endl;
	            	cout<<"\t\t\t|===============================|"<<endl;
	               	cout<<"\t\t\t|       1.Issue Book.           |"<<endl;
		            cout<<"\t\t\t|       2.Return Book.          |"<<endl;
		            cout<<"\t\t\t|       3.Return Status.        |"<<endl;
					cout<<"\t\t\t|       4.Exit.                 |"<<endl;
		            cout<<"\t\t\t|===============================|"<<endl;
			}//End of studentpage
		    void startpage(){
		    	cout<<"\t\t\t|===============================|"<<endl;	
	            cout<<"\t\t\t|   LIBRARY MANAGEMENT SYSTEM   |"<<endl;
	            cout<<"\t\t\t|===============================|"<<endl<<endl;	
		    	cout<<"\t\t\t|===============================|"<<endl;	
		        cout<<"\t\t\t|       1.Create Account.       |"<<endl;
		        cout<<"\t\t\t|       2.Login Account.        |"<<endl;
		        cout<<"\t\t\t|       3.Developer.            |"<<endl;
		        cout<<"\t\t\t|       0.Exit.                 |"<<endl;
		        cout<<"\t\t\t|===============================|"<<endl;
			}//End of startpage
	        void portal(){
	        	cout<<"\t\t\t|===============================|"<<endl;
	        	cout<<"\t\t\t|       1.Admin Portal.         | "<<endl;
				cout<<"\t\t\t|       2.Student Portal.       |"<<endl;
				cout<<"\t\t\t|       3.Back.                 |"<<endl;
				cout<<"\t\t\t|===============================|"<<endl;	
			}//End of portal
			bool account(){
				cout<<"Enter Username : ";
				cin>>uname;
				cout<<"Set Password : ";
				cin>>pass;
				return true;
			}//end of account	
			bool login(){
				bool con=false;
				string uname1,pass1;
				cout<<"Enter Username : ";
				cin>>uname1;
				cout<<"Enter Password : ";
				cin>>pass1;
				if(uname==uname1 && pass==pass1)
				{
				 	con= true;	
				}
				else 
				{
					cout<<"Invald Username or Password"<<endl;
					sleep(1);
					con= false;
				 	system("cls");
				}
				return con;
			}//end of login
			bool addbooks(){
				char key;
				Library lib;
				    cout<<"\t\t\t|===============================|"<<endl;
		    	    cout<<"\t\t\t|          ADD BOOKS            |"<<endl;
				    cout<<"\t\t\t|===============================|"<<endl<<endl;
				do{ 
					cout<<"Enter Book Name : ";cin>>lib.book_name;
					cout<<"Enter Quantity of Books : ";cin>>lib.quantity;
					cout<<"Enter Books Subject : ";cin>>lib.book_subject;
					vec.push_back(lib);
					cout<<"\n\n Do You want to add another(y/n)"<<endl;
					key=getch();
				}while(key!='n');		
				clear();
				return true;
		    }//end of addbook.
		    void availbooks(){
		    	    cout<<"\t\t\t|===============================|"<<endl;
		    	    cout<<"\t\t\t|       AVAILABLE BOOKS         |"<<endl;
		            cout<<"\t\t\t|===============================|"<<endl<<endl;
		            cout<<"\t\t\t|================================================|"<<endl;
		            cout<<"\t\t\t| Suject            Name                Quantity |"<<endl;
					for(int i=0;i<vec.size();i++){
					cout<<"\t\t\t|"<<i+1<<")"<<vec[i].book_subject<<"            "<<vec[i].book_name<<"                 "<<vec[i].quantity<<" |"<<endl;
					}//for
									
					cout<<"\t\t\t|================================================|"<<endl<<endl;
					
			}//end of available books
			
            bool issuebooks(){
           	 Library lib;
           	 
           		cout<<"Enter Student name: ";
           	 	cin>>lib.std_name;
           	 	cout<<"Enter Issue date:(DD-MM-YYYY) ";
           	 	cin>>lib.issue_date;
           	 	cout<<"Enter book name: ";
           		cin>>lib.book_name;
				cout<<"Enter time period for issuance:(in months) ";
           	 	cin>>lib.ret_time_period;
            	vector_issue.push_back(lib);
            	cout<<lib.book_name<<" issued to "<<lib.std_name<<" at "<<lib.issue_date<<" For "<<lib.ret_time_period<<" months"<<endl;
                return true;		
			}
			
			void returnbooks(){
				Library lib;
				system("cls");
				
				cout<<"\t\t\t|========================================================|"<<endl;
		    	cout<<"\t\t\t|                       RETURN BOOKS                     |"<<endl;
		        cout<<"\t\t\t|========================================================|"<<endl<<endl;
		        cout<<"\t\t\t|===========================================================|"<<endl;
		        cout<<"\t\t\t|STUDET NAME\tIISUE DATE\t  BOOK NAME\tISSUE PERIOD|"<<endl;
				
				for(int i=0;i<vector_issue.size();i++){
					cout<<"\t\t\t|"<<vector_issue[i].std_name;
					cout<<"\t\t"<<vector_issue[i].issue_date;
					cout<<"\t\t"<<vector_issue[i].book_name;
					cout<<"\t\t"<<vector_issue[i].ret_time_period<<"|"<<endl;
				}//for					
				cout<<"\t\t\t|===========================================================|"<<endl<<endl;
			
				cout<<"Enter Student name:";
				cin>>lib.std_name;
				cout<<"Enter book name: ";
				cin>>lib.book_name;
				cout<<"Enter return date: ";
				cin>>lib.return_date;
				vector_return.push_back(lib);
				
				for(int i=0; i<vector_issue.size(); i++){
	 				if(lib.std_name==vector_issue[i].std_name){
	 					vector_issue.erase(vector_issue.begin()+i);
	 					cout<<lib.std_name<<" returned book...."<<endl<<endl;
					}
				}	
				
				getch();
			}
			
			void returnStatus(){
				cout<<"\t\t\t|========================================================|"<<endl;
		    	cout<<"\t\t\t|                       RETURN STATUS                    |"<<endl;
		        cout<<"\t\t\t|========================================================|"<<endl<<endl;
		        cout<<"\t\t\t|========================================================|"<<endl;
		        cout<<"\t\t\t|STUDENTNAME\t ISSUE DATE\t  BOOK NAME\t TIME PERIOD|"<<endl;
				
				for(int i=0;i<vector_return.size();i++){
					cout<<"\t\t\t|"<<vector_return[i].std_name;
					cout<<"\t\t"<<vector_return[i].issue_date;
					cout<<"\t\t"<<vector_return[i].book_name;
					cout<<"\t\t"<<vector_return[i].ret_time_period<<"\t|"<<endl;
				}//for					
				cout<<"\t\t\t|=========================================================|"<<endl<<endl;
				
			}
			
};
//FUNCTION
        void clear(){
		            cout<<"Press Any key to continue..."<<endl;
					getch();
					system("cls");	   
		}
int main(){
	Library L;
	    int selection;
		bool createaccount=false;
		bool loginaccount=false;
		bool addbook=false;
		bool issuebook=false;
		bool adminpage=false;
		do{
		    L.startpage();
		    cout<<"\n\nEnter Your Selection : ";
		    cin>>selection;
		    if(selection==1){
			    createaccount=L.account();
			    cout<<"\nAccount Created succesfully\n";
			    clear();
			   }
			else if(selection==2){
               if(createaccount){
				int option;
				int choice;
				if(L.login()){
				cout<<"\nLog in successfully";
				sleep(1);cout<<".";	sleep(1);cout<<".";	sleep(1);cout<<".";
				system("cls");
				    do{
                      L.portal();
					  cout<<"Enter Choice : ";
					  cin>>option;
					  system("cls");
				     	if(option==1){
				                    do{	
	                                   L.Adminpage();   			
	                                   cout<<"\n\nEnter Your Choice : ";
	               	                   cin>>choice;
	                                      if(choice==1){
						                  system("cls");
						                  addbook=L.addbooks();
					                    }
					                    else if(choice==2){
					                    	if(addbook){
							                system("cls");
							                L.availbooks();
											clear();
					                    }
					                    else{
					   	                cout<<"Add Book First..."<<endl;
					                    clear();
			  		                    }
			                           }
				                   }while(choice!=3);
				                   adminpage=L.Adminpage();
				                   system("cls");
			                    }//end of Adminportal
                      	else if(option==2){
                      		  if(adminpage){
                      		        do{
                      		        	L.Studentpage();
									    cout<<"\n\nEnter Your Choice : ";
	               	                    cin>>choice; 
										if(choice==1){
											system("cls");
											L.availbooks();
											issuebook=L.issuebooks();
										}    
										else if (choice==2){
											if(issuebook){
											L.returnbooks();
										    system("cls");
										   }
										}
										else if(choice==3){
											L.returnStatus();
										}
									  }while(choice!=4); 
						 			  system("cls");             		        
                                   }
						}		
	     	        }while(option!=3);	
                                   
				}//login if
			   }			 
		        else 
				{
				cout<<"First Create Account."<<endl;
				clear();
				}
            }else if(selection==3){
            	system("cls");
            	L.developer();
            	clear();
			}
		}while(selection!=0);	
	return 0;
}//end main.
