#include <bits/stdc++.h>
using namespace std; 

void swap(int *x,int *y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            if(arr[j]<arr[k])
            {
                swap(&arr[j],&arr[k]);
            }
        }
    }
    for(int y=0;y<n;y++)
    {
        cout<<arr[y]<<" ";
    }
return 0;
}