//Class for Bank Account
//o Create a class BankAccount with data members like balance and member functions like deposit and withdraw. 
//Implement encapsulation by keeping the data members private.

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
	string name,account_type;
	int account_no,t_balance;
	
	public:
		void CreateAccount();
		void Deposit(){
			int d;
			cout<<"\n Plz Enter your amount to depsit in your account: ";
			cin>>d;
			t_balance+=d;
			cout<<"Your amount is Deposit successfully";
			cout<<"Now your balance is "<<t_balance;
		}
		void withdraw(){
			int w;
			cout<<"\n Plz Enter your amount to withdraw from your account: ";
			cin>>w;
			t_balance-=w;
			cout<<"Your amount is Withdraw successfully";
			cout<<"Now your balance is "<<t_balance;
		}
		void Balance(){
			cout<<"Your Total balance is "<<t_balance;
		}
		void Dlt(){
			cout<<"\n Account Holder Name: "<<name;
			cout<<"\n Account Number: "<<account_no;
			cout<<"\n Account Type: "<<account_type;
			cout<<"\n Account Total: "<<t_balance;
			
		}
		int traceInvalid(){
			if(name.empty()){
				return 0;
			}
			else{
				return 1;
			}
		}
};

void BankAccount::CreateAccount(){
	cout<<"\n This form is create you account in this bank plz fill the form!";
	cout<<"\n 1st Enter your Name: ";
	cin>>name;
	cout<<"\n 2nd Enter your Account number: ";
	cin>>account_no;
	cout<<"\n Enter your Account type: ";
	cin>>account_type;
	cout<<"\n Enter your Opening balence: ";
	cin>>t_balance;
}


main(){
	BankAccount ba;
	while(true){
		char choose;
		cout<<"\n plz choose a option\n C for create a account \n D for depsit a amount in your account \n W for withdraw amount from your account \n B for Balance check \n A for all Detail of your account ";
		cin>>choose;
		if(choose=='C'){
			ba.CreateAccount();
		}else if(choose=='D'){
			if(ba.traceInvalid()==1){
				ba.Deposit();
			}else{
				ba.CreateAccount();
			}
		}else if(choose=='W'){
			if(ba.traceInvalid()==1){
				ba.withdraw();
			}else{
				ba.CreateAccount();
			}
		}else if(choose=='B'){
			if(ba.traceInvalid()==1){
				ba.Balance();
			}else{
				ba.CreateAccount();
			}
		}else if(choose=='A'){
			if(ba.traceInvalid()==1){
				ba.Dlt();
			}else{
				ba.CreateAccount();
			}
		}else{
			break;
		}
	}
	
}