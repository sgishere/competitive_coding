#include <bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--)
    {
    int N,K;
    cin>>N>>K;
    if(K==N)
    {
        for(int i=1;i<N;i++)
        cout<<i<<" ";
        cout<<endl;
    }
    else{
        cout<<N-K+1<<" ";
        for(int i=1;i<=N-K;i++) cout<<i<<" ";
        for(int i=N-K+2;i<=N;i++)
        cout<<i<<" ";
    }
    }
return 0;
}