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
    while(T--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        int ct=0;
        if(N&1){
            ct++;
            int center=N/2;
            int i=center-1;
            int j=center+1;
            while(i>=0 and j<N){
                if(S[i]==S[j] and S[i]==S[center]){
                    if(i==j)ct+=1;else ct+=2;
                i--;
                j++;}
                else break;
            }
        }
        else{
            int center=N/2;
            int i=center-1;
            int j=center;
            while(i>=0 and j<N){
                if(S[i]==S[j] and S[i]==S[center])
                   { ct+=2;i--;
                    j++;}
                else break;
            }
        }
        cout<<ct<<endl;
       
    }
return 0;

}