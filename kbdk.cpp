#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
      

    for (int i = 0; i < t; i++)
    {
        int max=INT_MIN;
        int n,m;
        cin>>n>>m;
       
         
        char arr[n][m];

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m ; k++)
            {
                cin>>arr[j][k];
            }
        }
        
        
        for (int i = 0; i < n; i++)
        {
            int p=0;
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j]=='#')
                {
                    p+=1;
                }
            }
            if (p>max)
                {
                    max=p;
                }
        }
      cout<<max<<endl;  
    }
  return 0;     
}
 
            