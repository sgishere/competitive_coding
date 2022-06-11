//selection meaning either selecting maximum or minimum element and setting it to it's 
//required position
#include <bits/stdc++.h>
using namespace std; 
void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void selection_sort(int arr[],int N)
{
    for(int i=0;i<N-1;i++)
    {
        int index_min=i; 
        for(int j=i+1;j<N;j++)
        {
            if(arr[j]<arr[index_min])
            index_min=j;
        }
        swap(arr[index_min],arr[i]);
        // print(arr,N);cout<<endl;
    }  
}
int main(){
    int N;
    cin>>N;
    int array[N];
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
    }
    cout<<"Array before selection sort:\n";
    print(array,N);cout<<endl;
    selection_sort(array,N);
    cout<<"Array after selection sort:\n";
    print(array,N);


return 0;
}