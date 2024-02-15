#include<iostream>
using namespace std;

int main()
{
    char i,j,s,n,c='A';
    cout<<"enter any number :";
    cin>>n;
    for(i='A'; i<='E'; i++)
    {
        for(s=1; s<=n-i; s++)
        {
            cout<<" ";
        }
        for(j='A'; j<=i; j++)
        {
            cout<<c++<<" ";
        }
        cout<<endl;
    }
}
