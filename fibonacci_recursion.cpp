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
    cout<<"Which fibbonaci term u want";
    cin>>num;
    
    cout<<fib(num);
return 0;
}