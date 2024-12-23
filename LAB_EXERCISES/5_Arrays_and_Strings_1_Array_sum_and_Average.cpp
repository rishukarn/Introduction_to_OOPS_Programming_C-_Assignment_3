//Array Sum and Average
//o Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.
//o Objective: Understand basic array manipulation.

#include <iostream>
using namespace std;

int arr_sum(int size){
	
	int arr[size],sum=0;
	for(int i=0;i<size;i++){
		cout<<"Enter a index: "<<i<<" arr: ";
		cin>>arr[i];
		sum+=arr[i];
	}
	return sum;
}

int arr_average(int sum,int size){
	return sum/size;
}

main(){
	
	int s,a,size=7;
	s=arr_sum(size);
	a=arr_average(s,size);
	cout<<"\n Total sum of array is : "<<s;
	cout<<"\n Average of  array is : "<<a;
}