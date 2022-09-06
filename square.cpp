#include <iostream>
using namespace std; 

int main(){
    for (int i=10;i>=1;i--)
    {
        if (i==10){
            for (int k=1;k<=10;k++){
                cout<<"* ";
        }
        }
        else if(i==1){
            for (int j=1;j<=10;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*                 *";
        }
        cout<<endl;
    }
return 0;
    }
