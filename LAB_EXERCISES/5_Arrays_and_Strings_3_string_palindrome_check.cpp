//String Palindrome Check
//o Write a C++ program to check if a given string is a palindrome (reads the sameforwards and backwards).
// o Objective: Practice string operations.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string Palindrome_check(string str){
	
	string str1=str;
	reverse(str1.begin(), str1.end());
	if(str1==str){
		return "This string is palindrome";
	}else{
		return "This string is not palindrome";
	}
	
}

main(){
	string check;
	check=Palindrome_check("sis");
	cout<<check;
}