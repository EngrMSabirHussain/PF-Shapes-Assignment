#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch='E';
	int sp=0;
	for(int i=5;i>=1;i--)
	{
		for(int s=0;s<sp;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		{
			cout<<ch<<" ";
			
		}
		sp+=2;
		ch--;
	
		cout<<endl;		
	}
	
	getch();
	return 0;
}
