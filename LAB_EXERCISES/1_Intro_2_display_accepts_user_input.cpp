//Basic Input/Output
//o Write a C++ program that accepts user input for their name and age and thendisplays a personalized greeting.
//o Objective: Practice input/output operations using cin and cout.

#include <iostream>
using namespace std;

int main(){
	string name;
	int age;
	
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"Enter your age: ";
	cin>>age;
	
	cout<<"\n The name of person is : "<<name<<"\n The age of "<<name<<" is :"<<age;
}