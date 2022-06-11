#include<stdio.h>
#include<math.h>
int binary_search(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid;
    while(high>=low)
    {   mid=low+((high-low)/2);
        if(key>arr[mid])
        {
            low=mid+1;
        }
        else if (arr[mid]>key){
            high=mid-1;
        }
        else return mid;
    }
}
int countRotations(int arr[], int low, int high)
{
    if (high < low)
        return 0;
    if (high == low)
        return low;
    int mid = low + (high - low)/2; 
    if (mid < high && arr[mid+1] < arr[mid])
       return (mid+1);
    if (mid > low && arr[mid] < arr[mid - 1])
       return mid;
       if (arr[high] > arr[mid])
       return countRotations(arr, low, mid-1);

    return countRotations(arr, mid+1, high);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int k;
        scanf("%d",&k);
        int temp[n];
        for(i=0;i<n;i++)
    {
        temp[((i+k)%n)]=ar[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }
    // Question 1 over
    printf("\n");
    printf("Array is rotated by %d index\n",countRotations(temp,0,n-1));
    // Question 2 over
    int find;
    printf("Which element you want to find?\n");
    scanf("%d",&find);
    printf("%d element is found in rotated array at %d index \n",find, (binary_search(ar,n,find)+countRotations(temp,0,n-1))%n);
    // Question 3 over
    
}