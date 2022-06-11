#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int l,r;
		cin>>l>>r;
		int arr[r-l+1];
		iota(arr,arr+r-l+1,l);
		int x=1;
		int count=0;
		int y=1;
		for(int i=0;i<r-l+1;i++)
		{	y=x;
			y=x&arr[i];
			if(y==0)
			count++;
			else
			x=y;
		}
		cout<<count<<endl;
	}
	return 0;
}