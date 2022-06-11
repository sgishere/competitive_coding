//Question 3
// Write a program that takes data a line at a time and reverses the words of the line using pointer. For example,
// Input: birds and bees Reversed: bees and birds
#include <stdio.h>
#include <string.h>
  

int main()
{
char input[100];
char *var;
char *output;

  
printf("Input : ");
gets(input);
var=input;
output=input;
int count=0;
while(*var!='\0')
{
    var++;
    count++;
}

printf("Reversed : ");
int z=count;
for(int i=count;i>=-1;i--)
{
    if(input[i]==' ' || i==-1)
    {int j=i;
        for(int k=j+1;k<=z;k++)
       { printf("%c",*(output+k));}
       printf(" ");
        z=j-1;
    }
}

return 0;
}