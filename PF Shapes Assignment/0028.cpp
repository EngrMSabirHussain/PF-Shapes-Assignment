#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	for(int i=1;i<=5;i++)
	{
		for(int s=4;s>=i;s--)
		cout<<" ";
		char ch='A';
		for(int j=1;j<=i;j++)
		{
			cout<<ch;
			ch++;	
		}
		
		cout<<endl;
		
		
	}
	
	getch();
	return 0;
}
