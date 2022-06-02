#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{ int t;
  cin>>t;
  while(t--){
      int n,x;
      cin>>n>>x;
      int a[n];
      for(int i=0 ; i<n ; i++)cin>>a[i];
      int sum=0;
      int count=0;
      for(int i=0 ; i<n ; i++){
         sum+=a[i];
         if(a[i]==x)
         count++;
      }
      if(count==n)
      cout<<0<<endl;
      else if(count>0 ||sum==n*x)
      cout<<1<<endl;
      else
      cout<<2<<endl;
  }
 
    
    return 0;
}