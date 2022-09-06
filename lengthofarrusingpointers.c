#include<stdio.h>
int main()
{
     int N;
     scanf("%d",&N);
     int arr[N];
     for(int i=0;i<N;i++)
     {
         scanf("%d",&arr[i]);
     }
    int x=(&arr)[1]-arr;
    printf("Size of this array is %d\n",x);
    char brr[]="Sagar Gupta";
    int y=(&brr)[1]-brr;
    printf("Size of this character array is %d\n",y);

    return 0;
}