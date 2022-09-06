#include <bits/stdc++.h>
using namespace std; 

int main(){
    const int N=1e5+7;
int fib[N];
fib[0]=0;
fib[1]=1;
for(int i=2;i<=N;i++)
{
    fib[i]=fib[i-1]+fib[i-2];
}
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fib[n]<<endl;
    }
return 0;
}