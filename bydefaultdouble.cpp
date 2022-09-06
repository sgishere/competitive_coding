/*34.4is taken to be in double type by default.
use f before it*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"Size of 34.4 is"<<sizeof(34.4)  <<endl;
    cout<<"Size of 34.4f is"<<sizeof(34.4f)<<endl; /*Showing f=F for this function*/ 
    cout<<"Size of 34.4F is"<<sizeof(34.4F)<<endl; 
    cout<<"Size of 34.4l is"<<sizeof(34.4l)<<endl; /*Showing l=L for this function*/
    cout<<"Size of 34.4L is"<<sizeof(34.4L)<<endl;
    return 0;
}