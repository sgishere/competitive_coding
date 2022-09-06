#include <bits/stdc++.h>
using namespace std; 

int main(){
    vector <int> sg;
    int num;
    cout<<"size of vector here is"<<sg.size()<<endl;
    cout<<"No. of elements u want to enter in vector"<<endl;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        int n;
        cin>>n;
        sg.push_back(n);
        cout<<i<<" "<<sg[i]<<" " <<sg.size()<<endl;
    }
    cout<<"Size of vector is now before popping"<<sg.size();
    sg.pop_back();
    cout<<"Size of vector is now after popping"<<sg.size();
return 0;
}