#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(i%2==1)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}