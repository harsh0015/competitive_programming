#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ji=1,ou=1;
    cin>>n;
    int zhong=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(abs(j-zhong)+abs(i-zhong)<=n/2)
            {
                cout<<ji*2-1<<" ";
                ji++;
            }
            else
            {
                cout<<ou*2<<" ";
                ou++;
            }
        }
        cout<<endl;
    }
    return 0;
}