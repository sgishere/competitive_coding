#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l=s.length(),cnt=1;
	vector<int> x;
	for(int i=0;i<=l-1;i++)
	{
		if(s[i]!=s[i+1]) 
		cnt++;
		else
		{
			x.push_back(cnt);
			cnt=1;
		}
	}
	cout<<*max_element(x.begin(),x.end());
    
}