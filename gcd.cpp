#include <bits/stdc++.h>
using namespace std; 

int main(){
    int X;
    int Y;
    cin>>X;
    cin>>Y;
    vector<int>xrr;
    vector<int>yrr;
    vector<int>commondiv;
    if(X==0 or Y==0){
        cout<<0;
    }
    else{
    for(int i=0;i<=X;i++)
    {
        if(X%i==0)
        xrr.push_back(i);
    }
    for(int i=0;i<=Y;i++)
    {
        if(Y%i==0)
        yrr.push_back(i);
    }
    
    for(int k=0;k<xrr.size();k++)
    {
        for(int x=0;x<yrr.size();x++)
        {
            if(xrr[k]==yrr[x])
            commondiv.push_back(xrr[k]);
        }
    }
    cout<<"Gcd of two numbers is:"<<*max_element(commondiv.begin(),commondiv.begin()+commondiv.size());
    }
return 0;
}