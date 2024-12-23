//Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions.
//o Objective: Introduce basic class structure

#include <iostream>
using namespace std;


class Calculator{
	
	public:
		void add(int x,int y){
			cout<<x+y;
		}
		void sub(int x,int y){
			cout<<x-y;
		}
		void mul(int x,int y){
			cout<<x*y;
		}void div(int x,int y){
			cout<<(x/y);
		}
};

main(){
	
	Calculator C;
//	C.add(2,2);
//	C.sub(4,2);
//	C.mul(2,2);
	C.div(90,60);
}