#include <iostream>
#include<stdlib.h>
using namespace std;
 
bool isPrime(int number)
        {
            int counter = 0;
            for (int j = 2; j < number; j++)
            {
                if (number % j == 0)
                {
                    counter = 1;
                    break;
                }
            }
            if (counter == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
 
int main()
{
 
	int n,num=1;
    int count = 0;
    cout<<"Number : " ;
    cin>>n;
    cout<<endl;
        while (true)
            {
                num++;
                if(isPrime(num))
                {
                    count++;
                }
                if(count==n)
                {
                    cout<<n<<"th prime number is "<<num;
                    break;
               	}
}
	
}