#include<iostream>
using namespace std;
struct employee
{
	string sfID,sfLName,sfFName;
	float sfDRate,sfBSal,sfGSal,sfDutyAllow,sfFuelAllow,sfTax,sfSocSec,totallow,totdeduct,sfNetSal,sfEntallow,sfDreallow,sfRentallow,sfRiskallow;
	int sfDWorked; 
};


int main()
{
	employee Adminstaff, Manager;
	
	int choice;
	cout<<"\t\t\t\t\t AFRICAN UNION BANK PLC (AUB)"<<endl;
	cout<<"choose your choice"<<endl;
	cout<<"1.Manager"<<endl;
	cout<<"2.Adminstaff"<<endl;
	cin>>choice;
	while(choice<1 or choice>2)
	{
		cout<<"error retype"<<endl;
		cin>>choice;
	}
	switch(choice)
	{
		case 1:
	cout<<"MANAGER INTERFACE"<<endl;
	cout<<"enter your first name"<<endl;
	cin>>Manager.sfFName;
	cout<<"enter your last name"<<endl;
	cin>>Manager.sfLName;
	cout<<"enter ID number"<<endl;
	cin>>Manager.sfID;
	
	cout<<"enter number of days worked"<<endl;
	cin>>Manager.sfDWorked;
	cout<<"enter your rate per day"<<endl;
	cin>>Manager.sfDRate;
	
    Manager.sfBSal=Manager.sfDWorked*Manager.sfDRate;
	Manager.sfDutyAllow=Manager.sfBSal*(0.16);
	Manager.sfFuelAllow=Manager.sfBSal*(0.14);
	Manager.sfRiskallow=Manager.sfBSal*(0.135);
	Manager.sfTax=Manager.sfBSal*(0.105);
	Manager.sfEntallow=Manager.sfBSal*(0.18);
	Manager.sfDreallow=Manager.sfBSal*(0.175);
	Manager.sfRentallow=Manager.sfBSal*(0.20);
	Manager.sfSocSec=Manager.sfBSal*(0.125);
	
	Manager.totallow=Manager.sfDutyAllow+Manager.sfFuelAllow+Manager.sfRiskallow+Manager.sfEntallow+Manager.sfDreallow+	Manager.sfRentallow;
	Manager.sfGSal=Manager.sfBSal+Manager.totallow;
	Manager.totdeduct=Manager.sfTax+Manager.sfSocSec;
	Manager.sfNetSal=Manager.sfGSal-Manager.totdeduct;
	
	cout<<"\t\t\t AFRICAN UNION BANK PLC (AUB)"<<endl;
	cout<<" Manager's name is\t"<<" "<<Manager.sfFName<<" "<<Manager.sfLName<<endl;
	cout<<" Manager's ID is\t"<<Manager.sfID<<endl;
	cout<<" Manager's net monthly salary is\t"<<Manager.sfNetSal<<endl;
	break;
	
	case 2:
	cout<<"ADMINISTRATION STAFF INTERFACE"<<endl;
	cout<<"enter your first name"<<endl;
	cin>>Adminstaff.sfFName;
	cout<<"enter your last name"<<endl;
	cin>>Adminstaff.sfLName;
	cout<<"enter ID number"<<endl;
	cin>>Adminstaff.sfID;
	
	cout<<"enter number of days worked"<<endl;
	cin>>Adminstaff.sfDWorked;
	cout<<"enter your rate per day"<<endl;
	cin>>Adminstaff.sfDRate;
	
	Adminstaff.sfBSal=Adminstaff.sfDWorked*Adminstaff.sfDRate;
	Adminstaff.sfDutyAllow=Adminstaff.sfBSal*(0.16);
	Adminstaff.sfFuelAllow=Adminstaff.sfBSal*(0.14);
	Adminstaff.sfRiskallow=Adminstaff.sfBSal*(0.135);
	Adminstaff.sfTax=Adminstaff.sfBSal*(0.105);
	Adminstaff.sfEntallow=Adminstaff.sfBSal*(0.18);
	Adminstaff.sfDreallow=Adminstaff.sfBSal*(0.175);
	Adminstaff.sfRentallow=Adminstaff.sfBSal*(0.20);
	Adminstaff.sfSocSec=Adminstaff.sfBSal*(0.125);
	
	Adminstaff.totallow=Adminstaff.sfDutyAllow+	Adminstaff.sfFuelAllow+Adminstaff.sfRiskallow+Adminstaff.sfEntallow+Adminstaff.sfDreallow+	Adminstaff.sfRentallow;
	Adminstaff.sfGSal=Adminstaff.sfBSal+Adminstaff.totallow;
	Adminstaff.totdeduct=Adminstaff.sfTax+Adminstaff.sfSocSec;
	Adminstaff.sfNetSal=Adminstaff.sfGSal-Adminstaff.totdeduct;
	
	cout<<"\t\t\t AFRICAN UNION BANK PLC (AUB)"<<endl;
	cout<<" Adminstaff name is\t"<<" "<<Adminstaff.sfFName<<" "<<Manager.sfLName<<endl;
	cout<<" Adminstaff ID is\t"<<Adminstaff.sfID<<endl;
	cout<<" Adminstaff net monthly salary is\t"<<	Adminstaff.sfNetSal<<endl;
	
}

	
	cin.get();
	cin.ignore();
	return 0;
}







