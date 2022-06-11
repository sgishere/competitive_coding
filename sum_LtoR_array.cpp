//SG69CODE
#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define l long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<N;i++)
	{
		arr[i]+=arr[i-1];
	}
	int Q;
	cin>>Q;
	while(Q--)
	{
		int L,R; //L is Lth position from beginning from 1
		cin>>L>>R;
		if(L>1)
		cout<<arr[R-1]-arr[L-2];
		else
		cout<<arr[R-1];
	}
return 0;
}

