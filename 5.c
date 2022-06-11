#include<stdio.h>
#include<time.h>
struct Student {
   char firstname[20];
   char lastname[20];
   int roll_number;
   int marks;
} students[10];
 
 void merge(struct Student arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    struct Student L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i].marks <= R[j].marks) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(struct Student arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int partition (struct Student arr[], int low, int high)
{
    int pivot = arr[high].marks;
    int i = (low - 1); 
    struct Student temp;
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j].marks < pivot)
        {
            i++; 
            // swap(&arr[i], &arr[j]);
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    // swap(&arr[i + 1], &arr[high]);
      temp=arr[i+1];
     arr[i+1]=arr[high];
     arr[high]=temp;
    return (i + 1);
}
void quickSort(struct Student arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
   int i, j, n;
   for (i = 0; i < 10; i++) {
      printf("\nEnter Student Firstname : ");
      scanf("%s", students[i].firstname);
      printf("\nEnter Student lastname : ");
      scanf("%s", students[i].lastname);
      printf("\nEnter Roll Number : ");
      scanf("%d", &students[i].roll_number);
      printf("\nEnter marks:");
      scanf("%d",&students[i].marks);
      printf("\n");
   }
   printf("Before merge sorting data is:-\n");
      for (i = 0; i < 10; i++) {
     printf("\nStudent %d Firstname : %s",i+1,students[i].firstname);
      printf("\nStudent %d lastname : %s",i+1,students[i].lastname);
      printf("\nStudent %d Roll Number : %d",i+1,students[i].roll_number);
      printf("\nStudent %d marks: %d",i+1,students[i].marks);
      printf("\n");
   }
   clock_t time_req;
   time_req=clock();
    mergeSort(students,0,9);
    time_req=clock()-time_req;
    printf("%f is time taken using merge sort\n",(float)time_req/CLOCKS_PER_SEC);
    printf("After merge sorting data is:-\n");
      for (i = 0; i < 10; i++) {
     printf("\nStudent %d Firstname : %s",i+1,students[i].firstname);
      printf("\nStudent %d lastname : %s",i+1,students[i].lastname);
      printf("\nStudent %d Roll Number : %d",i+1,students[i].roll_number);
      printf("\nStudent %d marks: %d",i+1,students[i].marks);
      printf("\n");
   }
   time_req=clock();
    quickSort(students,0,9);
    time_req=clock()-time_req;
    printf("%f is time taken using quick sort.\n",(float)time_req/CLOCKS_PER_SEC);
     printf("After quick sorting data is:-\n");
      for (i = 0; i < 10; i++) {
     printf("\nStudent %d Firstname : %s",i+1,students[i].firstname);
      printf("\nStudent %d lastname : %s",i+1,students[i].lastname);
      printf("\nStudent %d Roll Number : %d",i+1,students[i].roll_number);
      printf("\nStudent %d marks: %d",i+1,students[i].marks);
      printf("\n");
   }
   return 0;
}