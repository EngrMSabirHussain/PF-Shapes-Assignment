#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch='E';
	for(int i=1;i<=5;i++)
	{
		for(int j=i;j<=5;j++)
		cout<<ch<<" ";
		cout<<endl;
		ch--;
	}
	
	getch();
	return 0;
}
