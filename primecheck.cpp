#include<iostream>
using namespace std;
int main()
{
    int num,flag=0;
    cout<<"Which number u want to check";
    cin>>num;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            cout<<"No. is not prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {cout<<"Number is prime";}
    return 0;
}