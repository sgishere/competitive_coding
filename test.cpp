#include<bits/stdc++.h>
using namespace std;
int main(){
   char s1[20]="good";
   char s2[10];
   //strcpy(s2,s1);//strncpy(destination,source)
   strncpy(s2,s1,3);
   cout<<s2<<endl;
   return 0;

}