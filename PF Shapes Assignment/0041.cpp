#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int sp=4,c=1;
	
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=sp;s++)
		cout<<" ";
		char ch='A';
		for(int j=1;j<=c;j++)
		{
			cout<<ch;
			ch++;	
		}
		sp--;
		c+=2;			
		cout<<endl;		
	}
	
	getch();
	return 0;
}
