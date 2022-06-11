#include<stdio.h>
int count_pair(int a[],int b[],int s,int t){
    int m=0,n=0,count=0;
    while(m!=s && n!=t)
    {
        if(a[m]>b[n]){
            count+=s-m;
            n++;
        }
        else{
            m++;
        }
    }
    return count;
}
int main()
{   int s,t;
    scanf("%d",&s);
      int arr[s];
      for(int i=0;i<s;i++){
         scanf("%d",&arr[i]);
     }
    scanf("%d",&t);
      int brr[t];
    for(int i=0;i<t;i++){
         scanf("%d",&brr[i]);
     }
     int x=count_pair(arr,brr,s,t);
     printf("%d",x);
    return 0;
}