#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int st=1,sp=4;
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=sp;s++)
		cout<<" ";
		for(int j=1;j<=st;j++)
		{
			cout<<"*";	
		}
		sp--;
		st+=2;			
		cout<<endl;		
	}
	
	getch();
	return 0;
}
