#include <iostream>

using namespace std;

void printBar()
{
	for (int i=0;i<9;i++)
	cout<<"*";
	
	cout<<endl;
	for (int i=0;i<9;i++)
{	
	if (i>2 && i<7)
	cout<<"*";
	else
	cout<<"-";
}
cout<<endl;
}

int main ()
{
	printBar();
	for (int i=0;i<5;i++)
		cout<<"I love Pakistan."<<endl;
	
	cout<<endl;	
	printBar();
	bool isTodayFriday;
	isTodayFriday= true;
	if(isTodayFriday)
	cout<<"Bhai Nahana Parey gaa";
	else
	cout<<"Khaire hi hia Cheetey";
}
