#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int sp=4;
	char ch='A';
	
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=sp;s++)
		cout<<" ";
		for(char j=ch;j>='A';j--)
		{
			cout<<j;	
		}
		sp--;
		ch+=2;			
		cout<<endl;		
	}
	
	getch();
	return 0;
}
