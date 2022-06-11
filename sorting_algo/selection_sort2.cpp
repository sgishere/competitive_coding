#include <bits/stdc++.h>
using namespace std; 
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
//descending order sorting using selection sort
void selection_sort2(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int max_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[max_index]<a[j])
            {
                max_index=j;
            }
        }
        swap(a[max_index],a[i]);
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
    cout<<"Array before selection sort 2:\n";
    print(arr,N);cout<<endl;
    selection_sort2(arr,N);
    cout<<"Array after selection sort 2:\n";
    print(arr,N);

return 0;
}