#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0,l_d;
    
      cout<<"=================================================="<<endl;
    cout<<"enter any number:";
    cin>>num;

    while(num>0)
    {
        l_d=num%10;
        sum=sum+l_d;
        num=num/10;
    }
     cout<<"=================================================="<<endl;
    cout<<"sum of digit:"<<sum<<endl;
     cout<<"=================================================="<<endl;

}