#include <bits/stdc++.h>
using namespace std; 

int main(){
    int X;
    int Y;
    cin>>X>>Y;
    
    if(X==0 or Y==0)
        cout<<0;
    else{
    if(X>Y)
    {
        int temp;
        temp=X;
        X=Y;
        Y=temp;
    }
    int gcd;
    for(int i=0;i<Y;i++)
    {
        if(X%i==0 and Y%i==0)
        gcd=i;
    }
    cout<<"GCD of these nums is:"<<gcd;
    }
return 0;
}