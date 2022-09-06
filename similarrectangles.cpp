#include<bits/stdc++.h>
using namespace std;
int main()
{int n,k;
    cin>>n;
    
    int sides[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>sides[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        float x;
        x=sides[i][1]/sides[i][0];
        for(int j=0;j<n;j++)
        {
           if((sides[j][1]/sides[j][0])==x)
           {
               count+=1;
           } 
        }
    }
    cout<<count;
    return 0;
}