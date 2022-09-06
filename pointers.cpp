#include <iostream>
using namespace std; 

int main(){
    int a=4;
    int* b=&a; 
    // int* here defines b as the pointer variable which is going to store address of(&) a.
    cout<<"The address of variable a is"<<b<<endl;
    cout<<"The address of variable a is"<<&a<<endl;
    cout<<"The value at b is"<<*b<<endl;
    //b is containing address of a
    //to create pointer variable we use int*
    
return 0;
}