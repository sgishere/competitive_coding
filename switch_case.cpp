#include <iostream>
using namespace std;
int main()
{int age;
cout<<"Enter your age"<<endl;
cin>>age;
    switch(age)
    {
        case 18:
        {
            cout<<"You are 18";
            break;
        }
        case 22:
        {
            cout<<"You are 22";
            break;
        }
        case 1:
        {
            cout<<"You are 1";
        }
        default:
        {
            cout<<"No special cases.";
        }


    }
return 0;
}