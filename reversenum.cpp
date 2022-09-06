#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N;
    cin>>N;
    int d;
    int x=0;
    int i=log10(N);
    while(N>0)
    {
        d=N%10;
        x+=d*pow(10,i);
        i--;
        N=N/10;
    }
    N=x;
    cout<<N;
return 0;
}