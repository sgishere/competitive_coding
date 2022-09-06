#include <iostream>
using namespace std; 

int factorial(int num)
{   if (num<=1)
    {
        return 1;
    }
    else
    {return num*factorial(num-1);}
}
int main(){
    int num;
    cout<<"Which number factorial u want?"<<endl;
    cin>>num;
    cout<<"Factorial of ur number is"<<factorial(num);
return 0;
}