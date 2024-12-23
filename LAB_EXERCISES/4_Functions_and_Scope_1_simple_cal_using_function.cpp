//1. Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). The main function should call these based on user input. 
//o Objective: Practice defining and using functions in C++.


#include <iostream>
using namespace std;

void arithmetic(int a,char op,int b){
	
	if(op=='+'){
		cout<<"Add of two number: "<<a+b;
	}else if(op=='-'){
		cout<<"Sub of two number: "<<a-b;
	}else if(op=='*'){
		cout<<"Mult of two number: "<<a*b;
	}else if(op=='/'){
		cout<<"Div of two number: "<<a/b;
	}else{
		cout<<"invalid input";
	}
}

main(){
	int a,b;
	char c;
	cout<<"Enter your 1st number: ";
	cin>>a;
	cout<<"Enter arithmetic operater: ";
	cin>>c;
	cout<<"Enter your 2nd number: ";
	cin>>b;
	arithmetic(a,c,b);
}