//3. Variable Scope
//o Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope. o Objective: Reinforce the concept of variable scope.

#include <iostream>
using namespace std;

int x=5;//Global variable  it use every scope

void myfunction(){
	
	int y=10;//Local variable it use only local scope
	cout<<"\n Local variable scope "<<y;
}



main(){
	
	cout<<"\n Global variable scope "<<x;
	myfunction();
}