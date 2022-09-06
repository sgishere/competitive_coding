#include<iostream>
using namespace std;
int main()
{ int reply;
    cout<<"Wanna come to party YES or NO?";
    cout<<"Press 1 for YES and 0 for NO.";
    cin>>reply;
    if(reply==1)
    { int age;
        cout<<"what's ur age dude?";
        cin>>age;
        if (age<18 and age>0)
        {
            cout<<"You are not allowed in my party.Surry";

        }
        else  if(age<0)
        {
            cout<<"You are not born lol";
        }
        else
        {
            cout<<"You can come to my party!!Enjoy";
        }

    }
    else{
        cout<<"Fuck off";
    }
    

}