#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N;
    cin>>N;
    if(N%2==0)
    {
    if((N/2)&1)
        cout<<1;
    else
        cout<<0;
    }
    else{
        if(((N+1)/2)&1)
        cout<<1;
        else
        cout<<0;
    }
    

return 0;
}