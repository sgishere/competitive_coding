#include <iostream>
using namespace std; 
int factorial(int num)
{
    int j=1;
    for(int i=1;i<=num;i++)
    {
        j=j*i;
    }
    return j;
}
int main(){
    
    cout<<"which number factorial u want?";
    int num;
    cin>>num;
    cout<< factorial(num);
    
return 0;
}