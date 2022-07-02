#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int v=5,sp=0;
	for(int i=1;i<=5;i++)
	{
		for(int s=0;s<sp;s++)
		cout<<" ";
		for(int j=i;j<=5;j++)
		{
			cout<<v<<" ";
			
		}
		sp+=2;
		v--;
		cout<<endl;
		
		
		
		
	}
	
	getch();
	return 0;
}
