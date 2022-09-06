#include<bits/stdc++.h>
using namespace std;

int main()
{   int T;
cin>>T;
for( int i=0;i<T;i++)
{
    int A,B,C,P,Q,R;
    cin>>A;
    cin>>B;
    cin>>C;
    cin>>P;
    cin>>Q;
    cin>>R;
    if(A==min(A,min(B,C)))
    {
        A=max(P,max(Q,R));
    }
    else if(B==min(A,min(B,C)))
    {
        B=max(P,max(Q,R));
    }
    else if(C==min(A,min(B,C)))
    {
        C=max(P,max(Q,R));
    }
    int n=(P+Q+R)/2;
    
    if((A+B+C) > n)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
}
    return 0;
}