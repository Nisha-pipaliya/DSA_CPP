#include<iostream>
using namespace std;

int main()
{
    int i,n;

    cout<<"enter any number :";
    cin>>n;

    i=1;
    while(i<=n)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
   
}