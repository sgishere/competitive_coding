#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;

class student{
    string name; //now name is private  
    public: // to make objects available everywhere
    int age;
    bool gender;
    void setname(string s)
    {
        name=s;
    }
    void printout()
    {
        cout<<"name :"<<name<<endl;
        cout<<"age :"<<age<<endl;
        cout<<"gender :"<<gender<<endl;
    }
    student(){
        cout<<"Default constructer"<<endl;
    }// it is default constructor .(it works if not any other constructor is made)
    student(string s,int a,int b)
    {
        name=s;
        age=a;
        gender=b;
    }// it is parameterised constructor
    student(student &a)
    {
        name=a.name;
        age=a.age;
        gender=a.gender;
    } // copy constructor
};
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    student arr[4];
    lop(4){
       string sl;
        cin>>sl;
        arr[i].setname(sl);
        cin>>arr[i].age;
        cin>>arr[i].gender;    
    }
    lop(4)arr[i].printout();
    
    
return 0;

}