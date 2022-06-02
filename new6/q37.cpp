#include <bits/stdc++.h>
typedef long long  int  ll;
using namespace std;
int  main()
{
   long long int  t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll u[n];
      ll s[n];
      for(long long int  i=0;i<n;i++){
          cin>>u[i];
      }
      for(long long int  i=0;i<n;i++){
          cin>>s[i];
      }
      vector<long long int > v[n+1];
      for(long long int  i=0;i<n;i++){
          v[u[i]].push_back(s[i]);
      }
      vector<ll>ans(n+1,0);
      for(long long int  i=1;i<=n;i++){
          if(v[i].size()==0){
              continue;
          }
          sort(v[i].begin(),v[i].end(),greater<long long int >());
          for(long long int  j=1;j<v[i].size();j++){
              v[i][j]=v[i][j-1]+v[i][j];
          }
          
          long long int  ss=v[i].size();
          for(long long int  j=1;j<=ss;j++){
              long long int  rr=ss/j;
              rr=rr*j;
              if(rr==0){
                  continue;
              }
            //   cout<<rr<<" ";
              ans[j]=ans[j]+v[i][rr-1];
          }
          
      }
      
      for(long long int  i=1;i<=n;i++){
          cout<<ans[i]<<" ";
      }
      
       cout<<"\n";
   }
   
   return 0;
}