#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int K,P;
		cin>>K>>P;
        P--;
		string s;
		while(P)
		{
			s.push_back('a'+P%26);
			P=P/26;
		}
        if(s.size()>K)
        {
            cout<<-1<<endl;
            continue;
        }
        for(int i=s.size();i<K;i++)
        {
            s.push_back('a');
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
	}
	return 0;
}