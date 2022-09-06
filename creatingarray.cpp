#include <iostream>
using namespace std; 

int main(){
    //method1            datatype arrayname[]={element1,element2....}
    int array1[]={94,95,95,96,97};
    cout<<array1[0]<<endl;
    cout<<array1[1]<<endl;
    cout<<array1[2]<<endl;
    cout<<array1[3]<<endl;
    cout<<array1[4]<<endl;
    //method2        datatype arrayname[no.ofelements];
    int array2[5]; 
    array2[0]=3;
    array2[1]=4;
    array2[2]=9;
    array2[3]=7;
    array2[4]=6;
    cout<<array2[3]<<endl;
return 0;
}