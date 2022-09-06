#include <iostream>
using namespace std;

int main()
{
    int i=2,n=10000000,a=0,j,num;
    cout<<"Which nth prime number u want";
    cin>>num;
    int target=num;
    int count=0;
    while(i<=n){
            a=0;
            for(j=2;j<=i-1;j++){
                if(i%j==0){
                    a=1; 
                    break;
                }
            }
            if(a==0)
            {
                count++;
            }
            if(count==target){
                    cout<<"nth prime number is :"<<i;//print nth prime number
                break;
            }
        i++;
    }
    
    return 0;
}
