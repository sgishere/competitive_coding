// 1. WAP to print the address of a variable(any type).
// 2. WAP to print the address and value of an integer array by incrementing pointer.
// 3. WAP to print the address and value of an integer array by decrementing pointer.
// 4. WAP to store address of an integer array in a pointer array and print the values of the integer array using pointer array.
// 5. Write a program in C to compute the sum of all elements in an array using pointers.
// 6. Write a program in C to swap elements using call by reference.
// 7. Write a program to find out the greatest and the smallest numbers using pointers in an array.
// 8. Write a program in C to swap elements using call by reference.
// 9. write a program to demonstrate example of double pointer.
// 10. Write a program to search an element using pointers in an integer array.
#include<stdio.h>
int main()
{
     int c=4;
     printf("%p\n",&c);
     int arr[5]={1,2,3,4,5};
     int *ptr=arr;
    //  printf("%p\n",&arr[0]);
    //  printf("%p\n",arr);
    printf("%p\n",arr);
    for(int i=0;i<(*(&arr+1)-arr);i++)
    {
        printf("%d ",*(ptr+i));
    }
    

    return 0;
}