#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    
    vector<int>w;
    vector<int>x;
    int count=0;
    for(int k=0;k<N;k++)
    {   
        int sumx=0;
        int sumy=0;
        for(int v=0;v<=k;v++)
        {
            sumx+=arr[v];
        }
        for(int y=N-1;y>k;y--)
        {
            sumy+=arr[y];
        }
        
        if(sumx==sumy)
        { count+=1;
        for(int f=0;f<=k;f++)
        {
            w.push_back(arr[f]);
        }
        for(int y=k+1;y<N;y++)
        {
            x.push_back(arr[y]);
        }
        }
    }
    if(count==0)
    {
        cout<<-1;
    }
    else{
    for(int z=0;z<w.size();z++)
    {
        cout<<w[z]<<" ";
    }
    cout<<endl;
    for(int a=0;a<x.size();a++)
    {
        cout<<x[a]<<" ";
    }
    }

return 0;
}
