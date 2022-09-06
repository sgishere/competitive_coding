#include<bits/stdc++.h>
using namespace std;
int main()
{int grade;
cin>>grade;
//logical operators && (and) , || (or) 
if (grade<40)
{
    cout<<"Fail";
}
else if (grade>=40 && grade<60)
{
    cout<<"just pass";
}
else if (grade>=60 && grade<80)
    {
        cout<<"good";
    }
}