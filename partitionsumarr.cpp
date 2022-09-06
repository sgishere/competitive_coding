#include<bits/stdc++.h>
using namespace std;
 
void print(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
 
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
 
    if(sum%2==1){
        cout<<-1;
    }
    else
    {
        int total = 0;
        int ind=-1;
        for(int i = 0;i<n;i++)
        {
            total= total + v[i];
            if(total==sum/2){
                ind = i;
                break;
            }
            else if(total>sum/2){
                break;
            }
 
        }
 
        if(ind == -1){
            cout<<-1;
        }
        else
        {
            vector<int>x;
            vector<int>y;
            for(int i = 0;i<=ind;i++)
            {
                x.push_back(v[i]);
            }
            for(int i = ind+1;i<n;i++){
                y.push_back(v[i]);
            }
            print(x);
            print(y);
        }
    }
}