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
        int N;
        cin>>N;
        string S;
        cin>>S;
        // vector<int>dis;
        int index=0;
        int x=1;
        if(S.size()==1)cout<<"NO"<<endl;
        else if(S.size()==2){
            lop(2){
                if(S[i]=='W'){cout<<"NO"<<endl;
                break;}
            }
        }
        else{
        lop(S.size())
        {   int countred=0;
            int countblack=0;
            if(S[i]!='W'){
                int j=i;
            while(j<S.size() and S[j]!='W')
            {
                if(S[j]=='R')countred++;
                else countblack++;
                j++;
            }
            i=j-1;
            if(countred==0 or countblack==0)x=0;
            }
        }
        if(x==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        }
    }
return 0;

}