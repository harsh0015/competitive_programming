#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n][m];
        int mk=0;
        for(int i=0;i<n;i++)
        {
            string s;cin>>s;
            for(int j=0;j<m;j++)
            {
                if(s[j]=='*')
                {
                    arr[i][j]=++mk;
                }
                else arr[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]!=0)
                {
                    for(int k=1;k<n;k++)
                    {
                        if(j-k>=0 && j+k<m && i+k<n && arr[i+k][k+j]-arr[i+k][j-k]+1==(2*(k)+1))
                            ++mk;
                        else break;
                    }
                }
            }
        }
        cout<<mk<<"\n";
    }
}

