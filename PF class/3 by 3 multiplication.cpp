#include<iostream>
using namespace std;
const int row=3;
const int col=3;
int main(){
	int A[row][col];
	int B[row][col];
	int Result[row][col];
	cout<<"Enter Matrix 1:"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cout<<"["<<i<<","<<j<<"]=";	
			cin>>A[i][j];
		}
	}
	cout<<"Enter Matrix 2:"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cout<<"["<<i<<","<<j<<"]=";	
			cin>>B[i][j];
		}
	}
	for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        	Result[i][j]=0;
            for (int k=0;k<row;k++){
                Result[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"Multiplied Result :"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		cout<<Result[i][j]<<" ";
		}
		cout<<endl;
	}	
}
