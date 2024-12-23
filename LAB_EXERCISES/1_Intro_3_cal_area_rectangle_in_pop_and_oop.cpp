//POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculatethearea of a rectangle,
//and another using Object-Oriented Programming (OOP) withaclass and object for the same task. o Objective:
//Highlight the difference between POP and OOP approaches

//using procedural programming(pop)..................................................

#include <iostream>
using namespace std;
//
//int main(){
//	int length,width;
//	
//	cout<<"Enter your length: ";
//	cin>>length;
//	cout<<"Enter your width: ";
//	cin>>width;
//	
//	cout<<"Calculate the area of a rectangle is : "<<length*width;
//	
//}

//using Object-Oriented Programming (OOP).......................................


class Rectangle{
	int length,width;
	
	public:
		void set_input(){
				cout<<"Enter your length: ";
				cin>>length;
				cout<<"Enter your width: ";
				cin>>width;
		}
		
		void get_output(){
				cout<<"Calculate the area of a rectangle is : "<<length*width;
		}
};


int main(){
	
	Rectangle area;
	area.set_input();
	area.get_output();
}


