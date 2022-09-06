#include <bits/stdc++.h>
using namespace std; 
void func(string s1,string s2)
{
    int found=s1.find(s2);
    if(found!=string::npos){
        cout<<"s2 is found inside s1 at "<<found<<"index"<<endl;
    }
}
int main(){
    string s1="sagarisosm";
    string s2="osm";
    func(s1,s2);
return 0;
}