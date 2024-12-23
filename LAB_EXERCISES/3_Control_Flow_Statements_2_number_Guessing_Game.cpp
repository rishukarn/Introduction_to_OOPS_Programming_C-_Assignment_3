//2. Number Guessing Game
//o Write a C++ program that asks the user to guess a number between 1 and 100. 
//The program should provide hints if the guess is too high or too low. Use loops to allow the user multiple attempts.


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

main(){
	srand(time(0));
	int RandomNum=rand()%101,attempt=10;
//	cout<<"\n"<<RandomNum;
	
	for(int i=0;i<10;i++){
		cout<<"\n You have " <<attempt<< " attempts left to guess a number!";
		int GuessNum;
		cout<<"\n Guess a Number: ";
		cin>>GuessNum;
		if(GuessNum>RandomNum){
			cout<<" Your Guess is to High \n";
			attempt--;
		}else if(GuessNum==RandomNum){
			attempt--;
			
			break;
		}else{
			cout<<" Your Guess is to Low \n";
			attempt--;
		}
		
	}
	if(attempt==0){
		cout<<"You Loss a Game ,You cant guess a number in 10 attempts";
	}else{
		cout<<"You win a Game , You Guess a Number in  "<<attempt<<" attempts \n";
	}
}