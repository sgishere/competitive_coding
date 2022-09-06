#include <iostream>
using namespace std; 
int fib(int num)
{
    if (num<=2 && num>=1)
    {
        return 1;
    }
    else
    {
        return fib(num-1)+fib(num-2);
    }
}
int main(){
    int num;
    cout<<"upto which fibbonaci term u want";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    cout<<fib(i)<<" ";
    }
return 0;
}