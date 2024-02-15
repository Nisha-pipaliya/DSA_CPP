#include<iostream>
using namespace std;
int main()
{
    int num,i,sum=0,l_d,f_d;
    cout<<"=================================================="<<endl;
    cout<<"enter any number:";
    cin>>num;
    
    l_d=num%10;
    while(num>=10)
    {
        // l_d=num%10;
        // sum=sum+l_d;
        num=num/10;
    }
    f_d=num;
    sum=f_d+l_d;
    cout<<"=================================================="<<endl;
    cout<<"sum of first didit & last digit:"<<sum<<endl;
    cout<<"=================================================="<<endl;

}