#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    
    cout<<"enter any number :";
    cin>>n;
     
     i=n;
     while (i>=1)
     {
       sum+=i;
       i--;
     }
     cout<<sum<<endl;

     return 0;
     
}