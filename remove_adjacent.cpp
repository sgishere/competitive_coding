#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define ff first
#define ss second

#define lop(n) for (int i = 0; i < n; i++)
#define lopj(n) for (int j = 0; j < n; j++)

#define all(x) x.begin(), x.end()
#define sortd(x) sort(x.rbegin(), x.rend())
#define bitcount(x) __builtin_popcount(x)

#define vin vector <int>
#define vll vector <ll>
#define pll pair <ll, ll>
#define pii pair <int, int>
#define vpll vector <pll>

using namespace std;
char* removeUtil(char* str, char* last_removed)
{
    if (str[0] == '\0' || str[1] == '\0')
        return str;
    if (str[0] == str[1]) {
        *last_removed = str[0];
        while (str[1] && str[0] == str[1])
            str++;
        str++;
        return removeUtil(str, last_removed);
    }
  char* rem_str = removeUtil(str + 1, last_removed);
 
    if (rem_str[0] && rem_str[0] == str[0]) {
        *last_removed = str[0];
        return (rem_str + 1);
    }
    if (rem_str[0] == '\0' && *last_removed == str[0])
        return rem_str;
    rem_str--;
    rem_str[0] = str[0];
    return rem_str;
}
char* removedup(char* str)
{
    char last_removed = '\0';
    return removeUtil(str, &last_removed);
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    char s[200] ;
    cin>>s;
    cout<<removedup(s)<<endl;
    
return 0;

}