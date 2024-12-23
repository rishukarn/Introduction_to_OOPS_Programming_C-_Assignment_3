//Operator Demonstration
//o Write a C++ program that demonstrates arithmetic, relational, logical, and bitwiseoperators. Perform operations using each type of operator and display the results.
//o Objective: Reinforce understanding of different types of operators in C++.


#include <iostream>
using namespace std;

int main(){
	
	int a=5,b=10;
	
//	arithmetic
//	int sum=a+b;
//	cout<<sum;
//	int sub=b-a;
//	cout<<sub;
//	int mul=a*b;
//	cout<<mul;
//	int div=a/b;
//	cout<<div;
//	int mud=a%b;
//	cout<<mud;
	
	
	
//	relational

	bool ans1=a==b;
	bool ans2=a!=b;
	bool ans3=a<=b;
	bool ans4=a>=b;
	bool ans5=a<b;
	bool ans6=a>b;
	cout<<ans3;
	
	
//	logical
	cout << "Logical AND: " << ((a < b) && (b > 0)) << endl;
    cout << "Logical OR: " << ((a > b) || (b > 0)) << endl;

}