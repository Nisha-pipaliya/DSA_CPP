#include<iostream>
using namespace std;

int main()
{
    int i,j,s,n;
    cout<<"enter any number :";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(s=1; s<=n-i; s++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
