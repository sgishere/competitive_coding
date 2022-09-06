//bank interest money calculator
#include <iostream>
using namespace std; 
int moneycalc(int a,float factor=1.08) //say 8% is the interest u get
{
    return a*factor;
} //Default arguement should be at the right end of formal arguement declaration
int main(){
    int money;
    cout<<"Enter amount of money u want to deposit";
    cin>>money;
    cout<<"Are you a vip?";
    char reply;
    cin>>reply;
    if (reply=='y')
    {
        cout<<"Your deposited money is now "<<money<<" and u will get "<<moneycalc(money,1.2)<<" after 1 year";
    }
    else
    {
    cout<<"Your deposited money is now "<<money<<" and u will get "<<moneycalc(money)<<" after 1 year";
    }
return 0;
}