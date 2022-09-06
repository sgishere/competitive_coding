#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d=0;
    int num=0;
    for(int i=0;i<n;i++)
    {
        d=a[i]%10;
        num=num*10+d;
    }
    cout<<num;
return 0;
}