#include<iostream>
using namespace std;
int main(){
	int rows,cols;
	cout<<"Enter rows : ";cin>>rows;
	cout<<"Enter cols : ";cin>>cols;
	int arr[rows][cols];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<"A["<<i<<","<<j<<"]=";
			cin>>arr[i][j];
		}
	}
	cout<<"Matrix A"<<endl;
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			cout<<arr[i][j]<<" ";
			
		}
		cout<<endl;
		
	}

		
	cout<<"Transpose of A "<<endl;
	
	for(int i=0;i<cols;i++){
		for(int j=0;j<rows;j++){
			cout<<arr[j][i]<<" ";
			
		}
		cout<<endl;
		
	}
	
	
	
}
