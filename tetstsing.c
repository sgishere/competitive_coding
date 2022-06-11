#include<stdio.h>
int main()
{
    int arr[5];
    printf("Enter elements of array\n");
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    printf("Elements of arrays are:-\n");
    for(int i=0;i<5;i++){
        printf("Element at index %d is %d",i,arr[i]);
    }
    return 0;
}