#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	for(int i=5;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		cout<<i<<" ";
		cout<<endl;
	}
	getch();
	return 0;
}
