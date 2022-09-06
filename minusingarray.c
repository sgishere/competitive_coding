#include<stdio.h>
int main()
{
     int arr[10];
     for(int i=0;i<10;i++)
     {
         scanf("%d",&arr[i]);
     }
     
     for(int i=0;i<10;i++)
     {
         for(int j=i;j<10;j++)
         {
             if(arr[i]>arr[j])
             {
                 int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
             }
         }
     }
     printf("All numbers in ascending form is:\n");
     for(int i=0;i<10;i++)
     {
         printf("%d ",arr[i]);
     }
     printf("\n");
     printf("Minimum is %d\n",arr[0]);
     printf("Maximum is %d",arr[9]);
    return 0;
}