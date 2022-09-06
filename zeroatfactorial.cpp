#include <iostream>
#include<math.h>

using namespace std;

int main() 
{
	// your code goes here
	int t, x, count;
	cin>>t;
	while(t--)
	{
	    int k;
	    cin>>k;
	    int count=0;
	    while(k)
	    {
	        count+=k/5;
	        k=k/5;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
