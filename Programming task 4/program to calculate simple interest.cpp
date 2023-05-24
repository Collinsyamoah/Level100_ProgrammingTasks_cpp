//program to calculate simple interest
#include <iostream>
using namespace std;

int main()
{
	int prin,rate,time,si;
	
	cout<<"Enter Principal"<<endl;
	cin>>prin;
	
	cout<<"Enter rate"<<endl;
	cin>>rate;
	
	cout<<"Enter time"<<endl;
	cin>>time;
	
	si=prin*rate*time/100;
	cout<<"Simple Interest is\n"<<si;
	
	cin.get();
	cin.ignore();
	return 0;

}
