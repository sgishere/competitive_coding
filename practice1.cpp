#include<iostream>
using namespace std;
int fib(int num)
{
    if (num<=2 and num>0)
    {
        return 1;
    }
    else{
        return fib(num-1)+fib(num-2);
    }
}
int main()
{ int x;
    cout<<"Which fib number u want";
    cin>>x;
    cout<<fib(x);

    return 0;
}