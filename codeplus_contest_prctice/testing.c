#include<stdio.h>
int main()
{
    int var;
    void *ptr=&var;
    *ptr=5;
    printf("var=%d and *ptr=%d",var,*ptr);
    return 6;
}