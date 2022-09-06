#include <bits/stdc++.h>
using namespace std; 
typedef struct car{
    string name;
    int model_no;
    int chasis_no;
}c;
int main(){
    c hyundai[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter car name of %d car\n",i+1);
        cin>>hyundai[i].name;
        cout<<"Enter model number of "<<i+1<<" th car";
        cin>>hyundai[i].model_no;
        cout<<"Enter chasis number of "<<i+1<<" th car";
        cin>>hyundai[i].chasis_no;

    }
    for (int i = 0; i <2; i++)
    {
        cout<<"Details of car "<<i+1 <<": "<<endl;
        cout<<hyundai[i].name<<endl;
        cout<<hyundai[i].model_no<<endl;
        cout<<hyundai[i].chasis_no<<endl;
    }
    
    
return 0;
}