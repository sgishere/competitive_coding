#include<stdio.h>
int main()
{
     int age;
     int count=0;
     for(int i=0;i<10;i++){
         scanf("%d",&age);
         if(age>50 && age<60)count++;
     }
     printf("%d",count);
    return 0;
}