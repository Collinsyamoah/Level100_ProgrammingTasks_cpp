//program to calculate profit gained from sales
#include <iostream>
using namespace std;

int main()
{
	int loss,sprice,cprice;
	
	cout<<"Selling price"<<endl;
	cin>>sprice;
	cout<<"Cost price"<<endl;
	cin>>cprice;
	loss=cprice-sprice;
	cout<<"loss is\n"<<loss;
	
	cin.get();
	cin.ignore();
	return 0;

}
