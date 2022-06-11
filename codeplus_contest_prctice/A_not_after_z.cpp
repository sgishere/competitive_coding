#include <bits/stdc++.h>
using namespace std; 

int main(){
    int Q;
    cin>>Q;
    while(Q--)
    {
        string S,T;
        cin>>S>>T;
        int j=0,i=0,count=0;
            while(i!=(T.size()) and j!=(S.size()))
            {
                if(S[j]<=T[i])
                {count+=1;
                j++;i++;
                if(count==T.size())
                {   cout<<"YES";
                    break;
                }
                }
                else{
                    j++;
                }
            }
            if(count!=T.size())
            cout<<"NO"<<endl;

    }
return 0;
}   