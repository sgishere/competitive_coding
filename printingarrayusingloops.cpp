#include <iostream>
using namespace std; 

int main(){
    int array1[]={23,24,25,27,68,98,69};
    // using for loop
    cout<<"using for loop"<<endl;
    for(int i=0;i<7;i++){
        cout<<array1[i]<<endl;
    }
    //using while loop
    cout<<"Using while loop"<<endl;
    int j;
    while (j<7){
        cout<<array1[j]<<endl;
        j++;
    }
    //using do while loop
    cout<<"Using do while loop"<<endl;
    int k=0;
    do{
        cout<<array1[k]<<endl;
        k++;
    }while (k<7);
    
return 0;
}