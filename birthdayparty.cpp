#include<iostream>
using namespace std;
int main()
{char reply;
    cout<<"You want to come to my party??";
    cin>>reply;
    if (reply=='y')
    {int age;
        cout<<"what's ur age??";
        cin>>age;
        if ((age<18) and (age>0))
        {
            cout<<"You are not allowed to party";
        }
        else if (age<0)
        {
            cout<<"You r not born dude.";
        }
        else{
            cout<<"Welcome to pawri dude";
        }
    }
    else
    {
        cout<<"Fuck off";
    }
    return 0;
    }


