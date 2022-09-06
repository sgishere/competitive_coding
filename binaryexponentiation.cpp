/*
 given A and B and M, calculate A^B % M
A^B % M 
*/
 
#include<bits/stdc++.h>
using namespace std;
 
long long bin_pow(int a,int b, int m){
	if(b==0)return 1;
 
	long long x = bin_pow(a,b/2,m);
 
	if(b%2==1){
		return ( a* (x*x)%m )%m;
	}
	else{
		return (x*x)%m;
	}
}
 
int main(){
	int a,b,m;
	cin>>a>>b>>m;
	cout<<bin_pow(a,b,m);
}
