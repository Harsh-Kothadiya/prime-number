#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int no;
	cout<<"enter a no : ";
	cin>>no;
	int i;
	int a=0;
	if(no==2)
		cout<<"prime";
	else
	{
		for(i=2;i<no;i++)
		{
			a=0;
			if(no%i==0)
			break;
			a=1;
		}
		if(a==1)
		cout<<"prime";
		else
		cout<<"not prime";
	}
}
