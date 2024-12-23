//Nested Control Structures
//o Write a program that prints a right-angled triangle using stars (*) with a nestedloop. 
//o Objective: Learn nested control structures.

#include <iostream>
using namespace std;

main(){
	
	int row=5;
	
	for(int i=0;i<row;i++){
		for(int j=row-1;j>i;j--){
			cout<<" ";
		}
		for(int k=0;k<i+1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	
}