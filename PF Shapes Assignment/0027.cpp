#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch='A';
	for(int i=1;i<=5;i++)
	{
		for(int s=4;s>=i;s--)
		cout<<" ";
		for(int j=1;j<=i;j++)
		{
			cout<<ch;	
		}
		
		cout<<endl;
		ch++;
		
	}
	
	getch();
	return 0;
}
