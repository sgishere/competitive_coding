#include <iostream>
using namespace std; 

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main(){
    cout<<"Enter num1 value";int num1;
    cin>>num1;
    cout<<"Enter num2 value";int num2;
    cin>>num2;
    cout<<"Sum of these two num's is"<<sum(num1,num2);
return 0;
}