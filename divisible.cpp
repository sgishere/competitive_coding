#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    vector<int>digits;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N/2;i++)
    {  
        int c=arr[i];
        
        digits.push_back(c/(int)pow(10,(int)log10(c)));
    }
    for(int i=N/2;i<N;i++)
    {
        digits.push_back((arr[i])%10);
    }
    int num=0;
    for(int i=0;i<digits.size();i++)
    {
        num=num*10+digits[i];
    }
    if(num%11==0)
    cout<<"OUI"<<endl;
    else
    cout<<"NON"<<endl;
    return 0;
}