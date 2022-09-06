#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a,b;
    // cin>>a>>b;
    long long int c_ans;
    cin>>c_ans;
    int firstsecdig;
    while(c_ans>=10)
    {
        firstsecdig=c_ans%10;   
        c_ans=c_ans/10;
    }
    cout<<firstsecdig;
    return 0;
}