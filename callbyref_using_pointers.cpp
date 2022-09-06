#include <iostream>
using namespace std;
// swaping using pointers
void swap(int* a,int* b)
{
    int c=*a;
    *a=*b;
    *b=c;
}

int main()
{int num1,num2;
    cout<<"Enter num1 ";
    cin>>num1;
    cout<<"Enter num2 ";
    cin>>num2;
    cout<<"Num 1 is "<<num1<<" Num2 is "<<num2<<endl;
    swap(&num1,&num2);
    cout<<"Num 1 is "<<num1<<" Num2 is "<<num2<<endl;
    return 0;
}