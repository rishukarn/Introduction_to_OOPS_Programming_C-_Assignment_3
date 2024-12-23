//Matrix Addition
//o Write a C++ program to perform matrix addition on two 2x2 matrices. 
//o Objective: Practice multi-dimensional arrays.


#include <iostream>
using namespace std;

void matrix_add(int row, int col){
	cout<<"\n Array 0 \n";
	int arr[row][col],arr1[row][col],add_arr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter row no "<<i<<" col no "<<j<<": ";
			cin>>arr[i][j];
		}
		
	}
	cout<<"\n Array 1 \n";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter row no "<<i<<" col no "<<j<<": ";
			cin>>arr1[i][j];
		}
		
	}
	cout<<"'\\n adding two array \n ";
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			add_arr[i][j]=arr[i][j]+arr1[i][j];
			
		}
		
	}
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<add_arr[i][j]<<"\t";
			
		}
		cout<<"\n";
		
	}
	
	
}

main(){
	matrix_add(2,2);
}