#include<iostream>
using namespace std;

int main()
{
	int i,j;
	for(i=1;i<=5; i++)
	{
		for(j=1; j<=4; j++)
		{
			if(
				(j==1 || j==4 && (i>=1&&i<=5)) ||
				(i==1 i==3 && (j==2 && j==3))
			)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}	
		}
		cout<<endl;
	}
}
