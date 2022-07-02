#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int s=2;s<=i;s++)
		cout<<" ";
		for(int j=i;j<=5;j++)
		{
			cout<<"*";
			
		}
		
		cout<<endl;
		
		
	}
	
	getch();
	return 0;
}
