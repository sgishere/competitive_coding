#include<bits/stdc++.h>
using namespace std;
int main()
{   int T;
cin>>T;
for(int i=0;i<T;i++)
{
    int N,K; //N=lenofstring K=No. of operation
    cin>>N>>K;
    string S;
    cin>>S;
    int count=0;
    
        for(int j=0;j<N/2;j++)
        {
            if(S[j]==S[N-j-1])
            {
                continue;
            }
            else{
                S[j]=S[N-j-1];
                count+=1;
            }
        }
    if(K>=count)
    {
        if((K-count)%2==0)
        {
            cout<<"YES"<<endl;
        }
        else if(N%2!=0)
        {
           cout<<"YES"<<endl; 
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    
  
    
}
    return 0;
}