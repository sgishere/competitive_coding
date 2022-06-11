#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N,P,B;
    cin>>N>>P>>B;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if((arr[i]*arr[j])%P==B)
            count+=1;
        }
    }
    cout<<count<<endl;

return 0;
}