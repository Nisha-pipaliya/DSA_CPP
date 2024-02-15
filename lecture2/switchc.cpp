#include<iostream>
using namespace std;
int main()
{
	int choice ,n1,f=1,i,n3,n2,count=0,number,num;
	cout<<"choose any one ....."<<endl;
	cout<<"enter 1).factorial number...."<<endl;
	cout<<"enter 2).check the number prime or not prime....."<<endl;
	cout<<"enter 3).odd or even number ...."<<endl;
	
	cout<<"enter your choice :";
	cin>>choice;
	
	switch(choice)
	{
		case 1 :
			cout<<"factorial number..."<<endl;
			
			cout<<"enter any number :";
			cin>>n1;
			
			for(i=n1; i>=1; i--)
			{
				f*=i;
			}
			cout<<"factorial of number: " << f;
			break;
			
		
		case 3 :
			cout<<"odd even  number..."<<endl;
			
			cout<<"enter any number :";
			cin>>n3;
			
			for(i=1; i<=n3; i++)
			{
				if(n3%2==0)
                {
                    cout<<"number is even!";
                }
                else
                {
                    cout<<"number is odd";
                }
				
            }

		// case 2:
		// 	cout<<"check the number prime or not prime !"<<endl;
		// 	cout<<"enter any number :";
		// 	cin>>n2;

		// 	for(i=0; i<=n2; i++)
		// 	{
		// 		if(n2%i==0)
		// 		count++;

		// 		else if(count==2)
		// 		{
		// 			cout<<"prime number !";
		// 		}

		// 		else{
		// 			cout<<"Not prime Number !";
		// 		}
		// 	}
			

	case 2:

// Function to check if a number is prime
		bool isPrime(int num){ 
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
	}
    return true;
}


    	// int number;

    // Input from the user
   cout << "Enter a number: ";
   cin >> number;

    // Check if the number is prime
    if (isPrime(number)) {
      cout << number << " is a prime number." <<endl;
    } else {
       cout << number << " is not a prime number." <<endl;
    }




	}
	
}