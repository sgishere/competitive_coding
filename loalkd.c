#include<stdio.h>
int main()
{
     int m,n;
     scanf("%d",&n);
     scanf("%d",&m);
     int min,max;
     if(n<m){min=n;max=m;}
     else {min=m;max=n;}
    for(int i=max-1;i>min;i--)
    {
        if(i%7!=0)printf("%d,",i);
    }
    return 0;
}