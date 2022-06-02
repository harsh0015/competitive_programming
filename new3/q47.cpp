#include<bits/stdc++.h>
using namespace std;
 
int main()
{
      int t;
      cin>>t;
      while(t!=0)
      {
            int n,k;
            cin>>n>>k;
            int ans = n-k + (k)/2;
            
            cout<<ans<<endl;
            for(int i=k+1;i<=n;i++)
            {
                  cout<<i<<" ";
            }
            for(int i=0;i<k/2;i++)
            {
                  cout<<k-i-1<<" ";
            }
            cout<<endl;
            t--;
      }
      
}