#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N,M,Q;
    cin>>N>>M>>Q;
    pair<string,int>p[M];
    for(int i=0;i<M;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    for(int i=0;i<Q;i++)
    {
        int start,end;string y;
        cin>>y>>start>>end;
        int count=0;
        for(int i=0;i<M;i++)
        {
            string s=p[i].first;
            if(s[3]==y[0] and s[4]==y[1] and s[5]==y[2] and s[6]==y[3])
            {
                if(p[i].second<=end and p[i].second>=start)
                {
                    count+=1;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}