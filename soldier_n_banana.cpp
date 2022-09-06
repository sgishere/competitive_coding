#include <bits/stdc++.h>
using namespace std; 

int main(){
    int k,n,w;
    cin>>k; //cost of 1st banana
    cin>>n; //soldier has this much dollar
    cin>>w; // total banana he wants
    int total_cost=0;
    for(int i=1;i<=w;i++)
    {
        total_cost+=i*k;
    }
    cout<<total_cost-n;
return 0;
}