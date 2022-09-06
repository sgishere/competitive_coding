#include <iostream>
using namespace std; 

int main(){
    int a=69;
    int *b=&a;
    cout<<"The address of variable a is"<<b<<endl;//this is pointer program
    cout<<"The address of variable a is"<<&a<<endl;//to get address of a
    cout<<"The value at variable b is"<<*b<<endl;
    cout<<&b<<endl;//to get address of a pointer variable (b)
    int **c=&b; //c is a pointer variable which is contaning address of a pointer variable.
    cout<<"The address of variable b is"<<&b<<endl;
    cout<<"The address of variable b is"<<c<<endl;
    cout<<"The value at variable c is"<<*c<<endl;
    cout<<"The value at (value at variable c)is"<<**c;//to get value of a from c directly.
return 0;
}