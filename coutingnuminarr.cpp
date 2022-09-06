#include<bits/stdc++.h>
using namespace std;
const int n=1e5;
int freq[n];
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
    cin>>arr[i];
    freq[arr[i]]++;
    }
    for(int i=0;i<N;i++)
    {
        if(freq[i]==1)
        {
        cout<<i;
        break;
        }
    }
    return 0;
}
