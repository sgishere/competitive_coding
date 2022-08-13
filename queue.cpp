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
// IN QUEUE STL WE 
// PUSH-- ADD DATA AT THE END
// POP-- DELETES DATA FROM BEGINNING
// FRONT GIVES LEFTMOST ELEMENT
// BACK GIVES RIGHTMOST ELEMENT
void show_queue(queue<int>lola){
    queue<int>v=lola;
    while(!v.empty()){
        cout<<v.front()<<" ";
        v.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0);

    queue<int>q;
    q.push(3);
    q.push(69);
    q.push(5);
    q.push(8);
    show_queue(q);
return 0;

}