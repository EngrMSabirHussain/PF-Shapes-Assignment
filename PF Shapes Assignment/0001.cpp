#include<iostream>
using namespace std;
int main()
{
	int size;
	char character;
	cout<<"\t Enter any Character: ";
	cin>>character;
	cout<<"\t Enter Size of Square: ";
	cin>>size;
	cout<<"\n\n";
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size;j++)
		cout<<character<<" ";
		cout<<endl;
	}
	system("pause");
	return 0;
}
