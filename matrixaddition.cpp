#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3,n4;
    cout<<"enter n1 and n2 \n";
    cin>>n1>>n2;
    int a[n1][n2];
    cout<<"MATRIX 1 \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<"a["<<i<<"]["<<j<<"]="<<" ";
            cin>>a[i][j];
        }
        cout<<endl;
    }
    
    cout<<"enter n3 and n4 \n";
    cin>>n3>>n4;
    int b[n3][n4];
     cout<<"MATRIX 2 \n";
    for(int i=0;i<n3;i++){
        for(int j=0;j<n4;j++){
            cout<<"b["<<i<<"]["<<j<<"]="<<" ";
            cin>>b[i][j];
        }
        cout<<endl;
    }
    if(n1==n3 && n2==n4){
        cout<<"order are same for both matrix so matrix addition are possible \n";
        cout<<"addition of matrix 1 and matrix 2 is : \n";
        int c[n1][n2];
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                c[i][j]=a[i][j] + b[i][j];
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"orders are different and hence matrixes addition not possible";
    }
    return 0;


}