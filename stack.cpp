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
// IN STACK STL WE 
// PUSH AT THE TOP OF STACK
// DELETE AT THE TOP OF STACK
// TOP LOOKS UP FOR TOP ELEMENT
// JUST LIKE SHADI KI PLATE
// STACK= Vertical data..
// QUEUE= Horizontal data..
void show_stack(stack<int>lola){
    stack<int>v=lola;
    while(!v.empty()){
        cout<<v.top()<<" ";
        v.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    stack<int>q;
    q.push(3);
    q.push(69);
    q.push(5);
    q.push(8);
    show_stack(q);
    q.pop();
    cout<<endl;
    show_stack(q);
return 0;

}