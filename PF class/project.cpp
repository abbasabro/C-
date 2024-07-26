#include <iostream>
using namespace std;
const int MAX_BOOKS = 100;
const int MAX_TITLE_LENGTH = 100;
const int MAX_AUTHOR_LENGTH = 100;
struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int year;
};
void addBook(Book library[], int &numBooks){
    if (numBooks<MAX_BOOKS){
        Book newBook;
        cout << "Enter book title: ";
        cin.ignore(); 
        cin.getline(newBook.title, MAX_TITLE_LENGTH);

        cout << "Enter author name: ";
        cin.getline(newBook.author, MAX_AUTHOR_LENGTH);

        cout << "Enter publication year: ";
        cin >> newBook.year;

        library[numBooks] = newBook;
        numBooks++;

        cout << "Book added successfully!" << endl;
    } else {
        cout << "Library is full. Cannot add more books." << endl;
    }
}//end of addbook.
void displayBooks(const Book library[], int numBooks) {
    if (numBooks == 0) {
        cout << "Library is empty." << endl;
    } else{
        cout << "List of books in the library:" << endl;
        for(int i = 0; i < numBooks; ++i){
            cout << "Title: " << library[i].title << ", Author: " << library[i].author << ", Year: " << library[i].year << endl;
        }
    }
 
}//end of displaybook
int main() {
    Book library[MAX_BOOKS]; 
    int numBooks = 0;
    int choice;
    do{
        	cout<<"\t\t\t|===============================|"<<endl;	
	        cout<<"\t\t\t|   LIBRARY MANAGEMENT SYSTEM   |"<<endl;
	        cout<<"\t\t\t|===============================|"<<endl<<endl;
            cout<<"\t\t\t|        1.Add Books.           |"<<endl;
		    cout<<"\t\t\t|        2.Available Books.     |"<<endl;
		    cout<<"\t\t\t|        3.Back.                |"<<endl;
		    cout<<"\t\t\t|===============================|"<<endl<<endl;      
            cout << "Enter your choice: ";
            cin >> choice;
            
            cin.ignore(); 
        switch(choice){
            case 1:
                addBook(library, numBooks);
                break;
            case 2:
                displayBooks(library, numBooks);
                break;
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
