#include<iostream>
using namespace std;

struct SIS
{ 
   string studid,studfullname,,studgender,studreligion,studtelephone,studaddress;
   string studcourse,studprogram,studlevel,studfaculty,studdepartment;
   string hname,hloc,hroom;
   string cgrp;
   string parentname,parentwork,contact,address;
   
   float cls,hw,quiz,midsem,exam,totmark;
   
   string stud_pinfo();
   string stud_family();
   float stud_assessment();
};

string SIS::stud_pinfo()
{ 
 cout<<"\t PERSONAL INFORMATION OF STUDENT\n";
 cout<<"\t -------------------------------\n";
 cout<<endl;
 cout<<"\t please enter student's fullname\n";
 cin>>SIS::studfullname;
 cout<<"\t please enter student's ID\n";
 cin>>SIS::studid;
 cout<<"\t please enter student's gender\n";
 cin>>SIS::studgender;
 cout<<"\t please enter student's religion\n";
 cin>>SIS::studreligion;
 cout<<"\t please enter student's address\n";
 cin>>SIS::studaddress;
 cout<<"\t please enter student's contact\n";
 cin>>SIS::contact;
 cout<<"\t please enter student's faculty\n";
 cin>>SIS::studfaculty;
 cout<<"\t please enter student's department\n";
 cin>>SIS::studfaculty;
 cout<<"\t please enter student's program\n";
 cin>>SIS::studprogram;
 cout<<"\t please enter student's level\n";
 cin>>SIS::studlevel;
 cout<<"\t please enter student's course\n";
 cin>>SIS::studcourse;
 
 cout<<"\tSTUDENT'S HOSTEL INFORMATION\n";
 cout<<"\t----------------------------\n";
 cout<<endl;
 cout<<"\t please enter the name of student's hostel\n";
 cin>>SIS::hname;
 cout<<"\t please enter hostel location\n";
 cin>>SIS::hloc;
 cout<<"\t please enter students room number\n";
 cin>>SIS::hroom;
 
 cout<<"\tSTUDENTS CAMPUS ASSOCIATION\n";
 cout<<endl;
 cout<<"\tplease enter student's association\n";
 cin>>SIS::cgrp;
}

string SIS::stud_family()
{
	cout<<"\tSTUDENT'S FAMILY DETAILS\n";
	cout<<endl;
	cout<<"\t enter father's fullname\n";
	cin>>SIS::parentname;cin>>SIS::parentname;
	cout<<"\t please enter father's occupation\n";
	cin>>SIS::parentwork;
	cout<<"\t enter father's contact\n";
	cin>>SIS::contact;
	cout<<"\t enter mother's fullname\n";
	cin>>SIS::parentname;cin>>SIS::parentname;
	cout<<"\t please enter mother's occupation\n";
	cin>>SIS::parentwork;
	cout<<"\t enter mother's contact\n";
	cin>>SIS::contact;
	cout<<"\t enter family address\n";
	cin>>SIS::address;
}
float SIS::stud_assessment()
{
	cout<<"\tSTUDENT'S ACCADEMIC ASSESSMENT\n";
	cout<<endl;
	cout<<"\t please enter student's classwork\n";
	cin>>SIS::cls;
	cout<<"\t please enter student's homework\n";
	cin>>SIS::hw;
	cout<<"\t please enter student's quiz assessment\n";
	cin>>SIS::quiz;
	cout<<"\t please enter students midsemester exam\n";
	cin>>SIS::midsem;
	cout<<"\t please enter students end of semester exam\n";
	cin<<SIS::exam;
	
	SIS::totmark=SIS::cls+SIS::exam+SIS::hw+SIS::midsem+SIS::quiz;
	
	cout<<"\t student's name :"<<SIS::studfullname<<endl;
	cout<<"\t student's ID :"<<SIS::studid<<endl;
	cout<<"\t student's faculty :"<<SIS::studfaculty<<endl;
	cout<<"\t student's department :"<<SIS::studdepartment<<endl;
	cout<<"\t level of student :"<<SIS::studlevel<<endl;
	cout<<"\t student's program :"<<SIS::studprogram<<endl;
	cout<<"\t course :"<<SIS::studcourse<<endl;
	cout<<"\t Total mark :"<<SIS::totmark<<endl;
	
	if(totmark>=80)
	{
		cout<<"\t Grade A";
	}
	else if(totmark>=70)
	{
		cout<<"\t Grade B";
	}
	else if(totmark>=60)
	{
		cout<<"\t Grade C";
	}
	else if(totmark>=50)
	{
		cout<<"\t Grade D";
	}
	else if(totmark >=40)
	{
		cout<<"\t Grade E";
	}
	else if(totmark<=39)
	{
		cout<<"\t Grade F";
	}
	
	
	
	
	cin.get();
	cin.ignore();
	return.0;
	
}


