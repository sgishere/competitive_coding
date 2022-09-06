#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
    cout<<s<<endl;
	for(int i=0;i<s.length();i++)
	{	if(int(s[i])>=65 and int(s[i])<97)
		{
            s[i]=s[i]+32;
        }
		else{
			s[i]=s[i]-32;
		}
	}

    cout<<"String now is"<<s;
}