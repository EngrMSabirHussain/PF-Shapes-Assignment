#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int sp=0;
	for(int i=5;i>=1;i--)
	{
		for(int s=0;s<sp;s++)
		cout<<" ";
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
			
		}
		sp+=2;
	
		cout<<endl;
		
		
		
		
	}
	
	getch();
	return 0;
}
