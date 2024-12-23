//C ++ Programming Assessment Test
//Event Management System


#include <iostream>
#include <string>
using namespace std;

class EventManagement{
	double CostPerHour=18.50,CostPerMinute=.40,CostOfDinner=20.70; 
	string Event_Name,full_name_organiser;
	int total_guest,event_time,total_server,total_food_cost,total_cost,deposit,server_cost;
	
	public:
	
		EventManagement(){
			cout<<"\n Enter name of the Event: ";
			cin>>Event_Name;
		}
//		taking all customer detail
		void set_event_organiser_dtl(){
			cout<<"\nEnter the customer's full Name: ";
			getline (cin>>ws,full_name_organiser);
			cout<<"\nEnter a number of Guest: ";
			cin>>total_guest;
			cout<<"\nEnter the number of minutes in Event: ";
			cin>>event_time;
			get_server_cost();
			
		}
//		calculating the how many server you need and per server cost
		void get_server_cost(){
			total_server=total_guest/20;
			int cost1=(event_time/60)*CostPerHour;
			int cost2=(event_time%60)*CostPerMinute;
			server_cost=cost1+cost2;
//			calling function get foot cost
			get_foot_cost();
		}
//		this function calculating the total event food cost and per person food cost
		void get_foot_cost(){
			total_food_cost=total_guest*CostOfDinner;
			total_cost=total_food_cost+total_server*server_cost;
			deposit=total_cost*.25;
			Est_cost_event();
		}
		void Est_cost_event(){
			
			cout<<"***************Event estimate for: "<<full_name_organiser<<"************************";
			cout<<"\n Number of Server: "<<total_server;
			cout<<"\n The Cost for Servers: "<<server_cost;
			cout<<"\n The Cost for Food is: "<<total_food_cost;
			cout<<"\n Avergae Cost Per Person: "<<CostOfDinner<<"\n\n";
			cout<<"\n Total Cost is : "<<total_cost;
			cout<<"\n Please deposite a 25% deposit to reserve the event \n The deposit needed is : "<<deposit;
			
			
			
		}
};


main(){
	
	cout<<"*****************Event Management System**********************";
	EventManagement EM;
	EM.set_event_organiser_dtl();
}