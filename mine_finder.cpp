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
    int n;
    cout<<"Enter size of grid:"<<endl;
    cin>>n;
    cout<<"Enter the minefiled layout:"<<endl;
    vector<string>v;
    lop(n){
        string x;
        cin>>x;
        v.pb(x);
    }
    vector<string>vcopy;
    string s="";

    lop(n)
        s.pb('x');
    lop(n)
        vcopy.pb(s);
    
    lop(n)
    {
        lopj(n)cout<<'x'<<" ";
        cout<<endl;
    }
    int count=0;
    lop(n*n){
    cout<<"Enter option:"<<endl;
    string lul;
    cin>>lul;
    if(lul[0]=='o' and v[int(lul[2]-'0')][int(lul[4]-'0')]=='x'){
        vcopy[int(lul[2]-'0')][int(lul[4]-'0')]='O';
        lopj(n){
            cout<<vcopy[j]<<endl;
        }
    }
    else if(lul[0]=='o' and v[int(lul[2]-'0')][int(lul[4]-'0')]=='m'){
        vcopy[int(lul[2]-'0')][int(lul[4]-'0')]='m';
        lopj(n){
            cout<<vcopy[j]<<endl;
        }
        cout<<"Oops,you stepped on a mine! Game over!"<<endl;
        break;
    }
    else if(lul[0]=='f' and v[int(lul[2]-'0')][int(lul[4]-'0')]=='m'){
        vcopy[int(lul[2]-'0')][int(lul[4]-'0')]='f';
        lopj(n){
            cout<<vcopy[j]<<endl;
        }
    }
    else {
        vcopy[int(lul[2]-'0')][int(lul[4]-'0')]='O';
        lopj(n){
            cout<<vcopy[j]<<endl;
        }
    }
    count++;
    }
    if(count==n*n)cout<<"Wow, you cleared the minefield! Game over!"<<endl;
    
return 0;

}