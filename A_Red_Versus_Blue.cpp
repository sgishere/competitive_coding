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
        int N,R,B;
        cin>>N>>R>>B;
        int mini=min(R,B);
        int maxi=max(R,B);
        int times=maxi/(mini+1);
        int lola=maxi;
        int k=mini;
        int x=R-times*(mini+1);
        while(k>0){
            for(int i=0;i<times;i++){
                if(maxi==R)cout<<'R';
                else cout<<'B';
                lola--;
            }
            if(x>0){
                if(maxi==R)cout<<'R';
                else cout<<'B';
                x--;
                lola--;
            }
            if(mini==R)cout<<'R';
            else cout<<'B';
            k--;
        }
        while(lola>0){
            maxi==R?cout<<'R':cout<<'B';
            lola-- ;
        }
        cout<<endl;
    }
return 0;

}