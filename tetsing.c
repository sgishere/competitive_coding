#include<stdio.h>
#define ll long long int
#define pk int t; cin>>t; while(t--);

int arr_size = 1000;

void cin_array(int size, int *arr){
    int *arr_end = (arr + (size - 1));
    while(arr<=arr_end){
        scanf("%d", arr++);
    }
    return;
}

void print_array(int size, int *arr)
{
    int *arrEnd = (arr + (size - 1));

    while(arr <= arrEnd)
        printf("%d, ", *(arr++));
        return;
}

void swap_array(int size, int * a1, int * a2)
{
    int * a1End = (a1 + (size - 1));
    int * a2End   = (a2 + (size - 1));

    while(a1 <= a1End && a2 <= a2End)
    {
        *a1 ^= *a2;
        *a2   ^= *a1;
        *a1 ^= *a2;

        a1++;
        a2++;
    }
    return;
}
int main(){
    

    int a1[arr_size]; //first array
    int a2[arr_size]; //second array
    int size;
    printf("Pls provide size of the arrays : ");
    scanf(" %d\n", &size);
    cin_array(size, a1);
    printf("\n");
    cin_array(size, a2);
    printf("\n");
    swap_array(size, a1, a2);
    
    printf("Arrays after swapping are : \n First array : ");
    print_array(size, a1);
    printf("\n Second array : ");
    print_array(size, a2);
    printf("\n");
return 0;
}