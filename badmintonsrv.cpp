#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int P;
	    cin>>P;
	    int num=0;
	    for(int j=0;j<=P;j++)
	    {   if(j%2==0)
	        num+=1;
	    }
	    cout<<num<<endl; 
	}
	
	return 0;
}
