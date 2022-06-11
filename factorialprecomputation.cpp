//SG69CODE
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define l long
const int N=1e7+1;
int fact[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++)
    {
        fact[i]=fact[i-1]*i;
    }
    int x;
    cin>>x;
    cout<<fact[x];
    
return 0;
}
