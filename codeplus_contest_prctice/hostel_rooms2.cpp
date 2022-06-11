#include <bits/stdc++.h>
using namespace std; 
const int n=1e5+7;
vector<int>v2020(n);
vector<int>v2019(n);
vector<int>v2018(n);
vector<int>v2017(n);
vector<int>v2016(n);
vector<int>v2015(n);
int main(){
    int N,M,Q;
    cin>>N>>M>>Q;
    for(int i=0;i<M;i++)
    {
        string s; int room_num;
        cin>>s; cin>>room_num;
        if(s[5]=='1' and s[6]=='5')
            v2015[room_num]++;
        else if(s[5]=='1' and s[6]=='6')
            v2016[room_num]++;
        else if(s[5]=='1' and s[6]=='7')
            v2017[room_num]++;
        else if(s[5]=='1' and s[6]=='8')
            v2018[room_num]++;
        else if(s[5]=='1' and s[6]=='9')
            v2019[room_num]++;
        else if(s[5]=='2' and s[6]=='0')
            v2020[room_num]++;
    }
    for(int i=0;i<Q;i++)
    {
        string str;
        int x,y;
        cin>>str>>x>>y;
        int sum=0;
        if(str[2]=='1' and str[3]=='6')
        {
            for(int i=x;i<=y;i++)
            sum+=v2016[i];
        }
        else if(str[2]=='1' and str[3]=='7')
        {
            for(int i=x;i<=y;i++)
            sum+=v2017[i];
        }
        else if(str[2]=='1' and str[3]=='8')
        {
            for(int i=x;i<=y;i++)
            sum+=v2018[i];
        }
        else if(str[2]=='1' and str[3]=='9')
        {
            for(int i=x;i<=y;i++)
            sum+=v2019[i];
        }
        else if(str[2]=='2' and str[3]=='0')
        {
            for(int i=x;i<=y;i++)
            sum+=v2020[i];
        }
        else if(str[2]=='1' and str[3]=='5')
        {
            for(int i=x;i<=y;i++)
            sum+=v2015[i];
        }
        cout<<sum<<endl;
    }
return 0;
}