#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        vector<int> v;
        vector<string> s;
        for(int i=0;i<n;i++)
        {
            int x;
            string st;
            cin>>x>>st;
            v.push_back(x);
            s.push_back(st);
        }
        int x=1;
        for(int k=0;k<=v[x];k++)
        {
            string z=s[k];
            vector<char> r;
            for(int i=0;i<z.size();i++)
            {
                r.push_back(z[i]);
            }
            cout<<"new:"<<endl;
            for(int i=0;i<z.size();i++)
            {
                cout<<r[i]<<" ";
            }
            z=" ";
            cout<<endl;
        }
          
            
}
cout<<endl;
}