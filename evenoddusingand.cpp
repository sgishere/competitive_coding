#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    if(n&1) // if (n & 1) automatically means (n & 1==1) means if n is odd 
    {
        cout<<"odd";
    }
    else{
        cout<<"even";
    }
return 0;
}