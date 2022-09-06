#include <bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int rem,Nx=0;
        while(N!=0)
        {
            rem=N%10;
            Nx=Nx+rem*10;
            N/=10;
        }
    cout<<Nx<<endl;
    }
    
return 0;
}