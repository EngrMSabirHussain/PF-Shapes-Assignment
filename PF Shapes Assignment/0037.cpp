#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int st=1,sp=4;
	char ch='A';
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=sp;s++)
		cout<<" ";
		for(int j=1;j<=st;j++)
		{
			cout<<ch;	
		}
		sp--;
		st+=2;
		ch++;			
		cout<<endl;		
	}
	
	getch();
	return 0;
}
