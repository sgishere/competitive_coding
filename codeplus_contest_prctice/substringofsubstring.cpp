//sg69pro code
#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    int T;
    cin>>T;
    while(T--)
    {
        string S;
        cin>>S;
        string P="";
        char lst=S[S.size()-1];
        char frst=S[0];
        int N=1e6+7;
        vll v;
        int count=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]!=lst and S[i]!=frst)
            {
                P.push_back(S[i]);
                count++;
            }
            else{
                v.push_back(count);
                count=0;
                P="";
            }
        }
        if(*max_element(all(v))>0)
        cout<<*max_element(all(v))<<endl;
        else
        cout<<-1<<endl;
    }
return 0;

}