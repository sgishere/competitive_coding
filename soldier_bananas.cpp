
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin>>k>>n>>w;
    int tcost=0;
    for(int i=1;i<=w;i++)
    {
        tcost+=i*k;
    }
    if(tcost>n)
    {
        cout<<tcost-n;
    }
    else{
        cout<<0;
    }
    return 0;
}