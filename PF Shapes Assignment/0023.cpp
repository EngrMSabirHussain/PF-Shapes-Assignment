#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	for(int i=1;i<=5;i++)
	{
		char ch='E';
		for(int j=i;j<=5;j++)
		{
			cout<<ch<<" ";
		    ch--;	
		}
		
		cout<<endl;
		
	}
	
	getch();
	return 0;
}
