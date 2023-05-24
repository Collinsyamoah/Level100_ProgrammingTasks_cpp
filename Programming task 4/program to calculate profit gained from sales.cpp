//program to calculate profit gained from sales
#include <iostream>
using namespace std;

int main()
{
	int profit,sprice,cprice;
	
	cout<<"Selling price"<<endl;
	cin>>sprice;
	cout<<"Cost price"<<endl;
	cin>>cprice;
	profit=sprice-cprice;
	cout<<"Profit is\n"<<profit;
	
	cin.get();
	cin.ignore();
	return 0;

}
