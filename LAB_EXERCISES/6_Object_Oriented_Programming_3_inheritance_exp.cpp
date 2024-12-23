//Inheritance Example
//o Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance. 
//o Objective: Learn the concept of inheritance


#include <iostream>
using namespace std;

class Person{
	protected:
		string p_name="rishu";
	
};

class Student:public Person{
	protected:
		string s_name="bikash";
		
	
};

class Teacher:public Student{
	protected:
		string t_name="soluman";
		
	public:
		void all_dtl(){
			cout<<"\n"<<p_name;
			cout<<"\n"<<s_name;
			cout<<"\n"<<t_name;
		}
	
};


main(){
	
	Teacher TSP;
	TSP.all_dtl();
}