#include<iostream>
using namespace std;
union pay
{
    int moneyvalue; //if paying exact amount of money
    char car; //assuming there are a,b,c cars to pay for money
    float gold_kg; //assuming u will pay through gold 
};

int main()
{ union pay sagar;
    sagar.gold_kg=34.4;
    //now don't take more input for payment as it will begin to give false value.
    //sagar.car='b'; if I write this then i will incorrect value of sagar gold.
    cout<<"Sagar is paying through gold "<<sagar.gold_kg<<endl;
    
    return 0;
}//basic diff b/w struct and union is (in struct we can use all variables)(in union we can use one variable)