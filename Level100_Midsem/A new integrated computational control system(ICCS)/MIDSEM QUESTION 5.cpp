//a new integrated computational control system(ICCS)
#include<iostream>
using namespace std;

int main()
{
	float firstnumber, secondnumber, result;
	

	int choice;
	cout<<"\t\t\t\t\tTHE DEPARTMENT OF NATIONAL LOTTORIES"<<endl;
	cout<<"SELECT YOUR OPTION\n"<<endl;
	cout<<"1.Addition\n"<<endl;
	cout<<"2.substraction\n"<<endl;
	cout<<"3.Division\n"<<endl;
	cout<<"4.multiplication\n"<<endl;
		cout<<"choose option\n"<<endl;
	cin>>choice;
	while(choice<1 or choice>4)
	{
		cout<<"WRONG INPUT RE-ENTER\n"<<endl;
		cin>>choice;
	}
	
	switch(choice)
	{
		case 1:
			cout<<"YOU CHOSE ADDITION\n"<<endl;
			cout<<"ENTER YOUR FIRST NUMBER\n"<<endl;
			cin>>firstnumber;
			cout<<"ENTER YOUR SECOND NUMBER\n"<<endl;
			cin>>secondnumber;
			result=firstnumber + secondnumber;
			cout<<"YOUR END RESULT IS\t"<<result;
			
			break;
			
			case 2:
				cout<<"YOU CHOSE SUBSTRACTION\n"<<endl;
				cout<<"ENTER YOUR FIRST NUMBER\n"<<endl;
				cin>>firstnumber;
				cout<<"ENTER YOUR SECOND NUMBER\n"<<endl;
				cin>>secondnumber;
				result=firstnumber-secondnumber;
				cout<<"YOUR END RESULT IS\n"<<result;
				
				break;
				
				case 3:
					cout<<"YOU CHOSE DIVISION\n"<<endl;
					cout<<"ENTER YOUR FIRST NUMBER\n"<<endl;
					cin>>firstnumber;
					cout<<"ENTER YOUR SECOND NUMBER\n"<<endl;
					cin>>secondnumber;
					result=firstnumber/secondnumber;
					cout<<"YOUR END RESULT IS\n"<<result;
					
					break;
					case 4:
						cout<<"YOU CHOSE MULTIPLICATION\n"<<endl;
						cout<<"ENTER YOUR FIRST NUMBER\n"<<endl;
						cin>>firstnumber;
						cout<<"ENTER YOUR SECOND NUMBER\n"<<endl;
						cin>>secondnumber;
						result=firstnumber*secondnumber;
						cout<<"YOUR END RESULT IS\n"<<result;
						
						break;
	}
	
	cin.get();
	cin.ignore();
	return 0;
	
}
