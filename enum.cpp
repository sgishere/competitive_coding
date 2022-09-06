#include <iostream>
using namespace std; 

int main(){
    enum daytime{morning,afternoon,night}; //here daytime is now dataype
    daytime x=afternoon; //morning is assigned value 0,afternoon=1.night=2
    daytime y=night;
    daytime z=morning;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<z<<endl;
return 0;
}