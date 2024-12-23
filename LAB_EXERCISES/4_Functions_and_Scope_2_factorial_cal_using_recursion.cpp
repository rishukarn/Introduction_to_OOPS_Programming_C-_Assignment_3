//2. Factorial Calculation Using Recursion
//o Write a C++ program that calculates the factorial of a number using recursion. 
//o Objective: Understand 

#include <iostream>
using namespace std;
int factorial(int n){
	
	if(n==0){
		return 1;
	}else{
		
		return n*(factorial(n-1));
	}
}

main(){
	
	int n,f;
	
	cout<<"Enter your number to calculates the factorial: ";
	cin>>n;
	f=factorial(n);
	cout<<"Factorial of "<<n<<" is "<<f;
}