#include<iostream>
using namespace std;

int main()
{
    int i,n,fact=1;

    cout<<"enter any number :";
    cin>>n;

    i=n;
    while(i>=1)
    {
        fact*=i;
        i--;
    }
    cout<<fact<<endl;

    return 0;
}