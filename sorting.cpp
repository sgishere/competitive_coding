#include <bits/stdc++.h>
using namespace std; 

int main(){
    int length;
    cin>>length;
    int arr[length];
    for( int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<length;i++)
    {
        for(int j=i;j<length;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            else{
                continue ;
            }
        }
    }
    for(int k=0;k<length;k++)
    {
        cout<<arr[k];
    }

return 0;
}