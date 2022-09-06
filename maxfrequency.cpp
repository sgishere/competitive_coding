#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N;
    cin>>N;
    int arr[N];
    int count=0;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int max=0;int index;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(arr[i]==arr[j])
            count+=1;
        }
        if(max<count)
        {max=count;
        index=i;
        }
        count=0;
    }
    cout<<"Maximum frequent element in this array is:"<<arr[index];

return 0;
}