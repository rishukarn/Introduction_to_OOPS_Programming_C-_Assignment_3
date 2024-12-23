//3. Multiplication Table
//o Write a C++ program to display the multiplication table of a given number usingaforloop. 
//o Objective: Practice using loops.


#include <iostream>
using namespace std;

main(){
	
	int table;
	
	cout<<"Enter a number to print table: ";
	cin>>table;
	
	for(int i=1;i<=10;i++){
		
		cout<<table<<"*"<<i<<"="<<table*i<<"\n";
	}
	
}