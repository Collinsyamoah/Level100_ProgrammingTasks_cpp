//struct with function
#include <iostream>
#include <string>
#define MAX 10
using namespace std;

class student
{
	string sid, sfname, sgender, sreligion, saddress; 
	string Department,FacultyInfo,HostelInfo,Campusgrp;
	string prntfadaname, prntmodaname,prntfadaocp, prntmodaocp, prntaddrss;
	int prntmodacontact, prntfadacontact;
	int level, scontact;
	float ctest,midtest,homwork, exam, totmark;
	char name[10];
	public:
	void result();
	void studentInfo();
};


void student::studentInfo()
{
	cout << "STUDENT INFORMATION\n\n\n\n " << endl;
	
	student lay;
	
	cout<<"Enter student full name ";
	getline(cin,sfname);
	
	cout<<"\nEnter student department\n ";
	getline (cin,Department);
	
	cout<<"\nEnter faculty info\n ";
	getline(cin,FacultyInfo);
	
	cout<<"Enter student hall\n ";
	getline(cin,HostelInfo);
	
	cout<<"Enter student Campus group or Association\n ";
	getline(cin,Campusgrp);
	
	cout<<"Enter student id ";
	cin>>sid;
	
	cout<<"Enter student gender\n ";
	cin>>sgender;
	
	cout<<"Enter student religion\n ";
	cin>>sreligion;
	
	cout<<"Enter student address\n ";
	cin>>saddress;
	
	scontact:
	cout<<"Enter student contact\n ";
	cin>>scontact;
	if(scontact < 0 || scontact >= 10)
	{
		cout << "WRONG ENTRY,PLEASE RETYPE AGAIN " << endl;
		goto scontact;
	}
	
	
	
	cout<<"Enter student level\n ";
	cin>>level;
	
	cout << "\n\n\nParent Information " << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ \t\t\t" << endl;
	
	cout << "Enter your father full name \n";
	cin>>prntfadaname;
	
	cout << "Enter your father occupation \n";
	cin>>prntfadaocp;
	
	cout << "Enter your father contact \n";
	cin>>prntfadacontact;
	
	cout << "Enter your mother full name \n";
	cin>>prntmodaname;

	cout << "Enter your mother occupation \n";
	cin>>prntmodaocp;
	
	cout << "Enter your mother contact \n";
	cin>>prntmodacontact;
	
	cout << "Enter your parent address \n";
	cin>>prntaddrss;
}

void student::result()
{	
	a:
	cout << "Enter your student class test ";
	cin  >> ctest;
	
	if(ctest <0 || ctest>=10 )
	{
		cout<<"Wrong input. Must be less than 10 \n";
		goto a;
	}
	b:
	cout << "Enter your student midterm test ";
	cin  >> midtest;
	
	if(midtest <0 || midtest >10 )
	{
		cout<<"Wrong input. Must be less than 20 \n";
		goto b;
	}
	
	c:
	cout << "Enter your student  homework ";
	cin  >> homwork;
	
	if(homwork <0 || homwork >10 )
	{
		cout<<"Wrong input. Must be less than 10 \n";
		goto c;
	}
	
	d:
	cout << "Enter your student exam ";
	cin  >> exam;
	
	if(exam <0 || exam >60 )
	{
		cout<<"Wrong input. Must be less than 60 \n";
		goto d;
	}
	
	totmark= ctest+exam+homwork+midtest;
	cout<<"Your total mark is: "<<totmark<<endl;
	
	if(totmark >=80)
	{
		cout<<"Your grade is A "<<endl;
	}
	else
	if(totmark >=70)
	{
		cout<<"Your grade is B "<<endl;
	}
	else
	if(totmark >=60)
	{
		cout<<"Your grade is C "<<endl;
	}
	else
	if(totmark >=50)
	{
		cout<<"Your grade is D "<<endl;
	}
	else
	if(totmark <50 )
	{
		cout<<"Your grade is F "<<endl;
	}
}

int main()
{
	
	student lay; 
	student std[MAX];
	int n, loop;
	
	cout << "Enter Total Number of Students ";
	cin >> 	n;
	
	for(loop = 0 ; loop < n ; loop ++)
	{
		cout << "Enter details of student " << loop +1 << endl;
		lay.studentInfo();
	}
		
	for(loop = 0 ; loop < n ; loop ++)
	{
		cout << "Enter result of student " << loop +1 << endl;
		lay.result();
		
	}
	
	cin.get();
	cin.ignore();
	return 0;
	
	}
	
	
	
	
	
	

