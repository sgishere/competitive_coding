#include <bits/stdc++.h>
using namespace std; 
int print(int x[][])
{
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++)
        {
            cout<<x[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int H;
    int W;
    int arr[H][W];
    for(int i=0;i<H;i++)
    {
        for(int j=0;j<W;j++)
        {
            cin>>arr[i][j];
        }
    }
    int brr[W][H];
    for(int i=0;i<W;i++)
    {
        for(int j=0;j<H;j++)
        {
            brr[i][j]=arr[j][i];
        }
    }
    print(brr[W][H]);

return 0;
}