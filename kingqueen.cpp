#include <bits/stdc++.h>
using namespace std; 

int main(){
    int T;
    cin>>T;
    while(T--)
    {
        string s;
        cin>>s;
        int indr,indg,indb,indR,indB,indG;
        for(int i=0;i<6;i++)
        {
            if(s[i]=='r')
            indr=i;
            else if(s[i]=='g')
            indg=i;
            else if(s[i]=='b')
            indb=i;
            else if(s[i]=='R')
            indR=i;
            else if(s[i]=='G')
            indG=i;
            else if(s[i]=='B')
            indB=i;
        }
        if(indr<indR and indg<indG and indb<indB)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
return 0;
}