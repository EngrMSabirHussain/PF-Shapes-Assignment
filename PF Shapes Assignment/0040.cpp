#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	int sp=4,v=1;
	
	for(int i=1;i<=5;i++)
	{
		for(int s=1;s<=sp;s++)
		cout<<" ";
		for(int j=v;j>=1;j--)
		{
			cout<<j;	
		}
		sp--;
		v+=2;			
		cout<<endl;		
	}
	
	getch();
	return 0;
}
