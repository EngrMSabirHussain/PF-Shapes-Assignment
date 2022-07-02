#include<iostream>
using namespace std;
int main()
{
    char ch='E';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		cout<<ch<<" ";
		cout<<endl;
		ch--;
	}
	system("pause");
	return 0;
}
