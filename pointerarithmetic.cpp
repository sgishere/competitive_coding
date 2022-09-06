//we will see pointer arithmetic in arrays.
#include <iostream>
using namespace std; 

int main(){
    int array1[]={23,45,69,96,88};
    int* p=array1; //address of 0th block is name of the array. So by saying int* p 
    cout<<(*p)<<endl;   // pointer variable p is referring to address of block 0
    cout<<(*(p+1))<<endl; //*p means value at p 
    cout<<(*(p+2))<<endl;
    cout<<(*(p+3))<<endl;
    cout<<(*(p+4))<<endl;
    //formula for pointer arithmetic 
    // new address=current address+ i*sizeof(datatype)


return 0;
}