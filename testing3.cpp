#include <bits/stdc++.h>
using namespace std;

void printbinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) &1);
    }
    cout << endl;
}
void iskthbitset(int n,int k){
    if((n>>(k-1))&1)
    cout<<"set\n";
    else cout<<"not set\n";
}

int main()
{

    int a;
    cin >> a;
    printbinary(a);
    int i;
    cin >> i;
  //  iskthbitset(13,3);
    if ((a & (1 << i)) != 0)
    {
        cout << "set bit" << endl;
    }
    else
    {
        cout << "not set bit" << endl;
    }

    // ith bit to set

    printbinary(a | (1 << i));

    // ith bit to unset

    printbinary(a & (~(1 << i)));

    // toggle

    printbinary(a ^ (1 << 2));
    printbinary(a ^ (1 << 3));

    int ct = 0;
    for (int i = 31; i >= 0; i--)
    {
        if ((a & (1 << i)) != 0)
        {
            ct++;
        }
    }
    cout << ct << endl;

    cout << __builtin_popcount(a) << endl;
    cout << __builtin_popcountll((1ll << 35) - 1) << endl;
}