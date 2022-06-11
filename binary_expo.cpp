#include <bits/stdc++.h>
#define ll long long
using namespace std; 
int binary_exp(int a,int b)
{    if(b==0) return 1;
    ll res=binary_exp(a,b/2);
    if(b&1) 
    return a*res*res;
    else 
    return res*res;
}
int main(){
    int a,b;
    cin>>a>>b;
    int c=binary_exp(a,b);
    cout<<c<<endl;
return 0;
}