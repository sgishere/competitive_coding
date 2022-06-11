#include <bits/stdc++.h>
using namespace std; 
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    // print(a,n);cout<<endl;
    }
}
int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before bubble sort:\n";
    print(arr,N);cout<<endl;
    bubble_sort(arr,N);
    cout<<"Array after bubble sort:\n";
    print(arr,N);
return 0;
}