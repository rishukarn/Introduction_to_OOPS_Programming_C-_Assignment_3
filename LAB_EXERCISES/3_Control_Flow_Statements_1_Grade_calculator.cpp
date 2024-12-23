//1. Grade Calculator
//o Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.

#include <iostream>
using namespace std;

main(){
	
	int st_marks[5] ,sum=0,per;
	
	for(int i=0;i<5;i++){
		cout<<"\n Enter your "<<i+1<<" subject marks: ";
		cin>>st_marks[i];
		sum+=st_marks[i];
	}
	per=sum/5;
//	cout<<"\n"<<per;
	if(per>85){
		cout<<"\n Grade of student is A";
	}else if(per>60){
		cout<<"\n Grade of student is B";
	}else if(per>45){
		cout<<"\n Grade of student is C";
	}else{
		cout<<"\n No Grade of student is fail";
	}
}