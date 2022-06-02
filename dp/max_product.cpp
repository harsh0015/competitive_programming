#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
	int t;
	cin>>t;
  while(t--){
   ll n,m,ans;
   cin>>n;
   ll a[n];
   for(int i=0; i<n; i++) cin>>a[i];
   sort(a,a+n);
   ans=max(a[0]*a[1]*a[2]*a[3]*a[n-1], max(a[0]*a[1]*a[n-3]*a[n-2]*a[n-1], a[n-5]*a[n-4]*a[n-3]*a[n-2]*a[n-1]));
   cout<<ans<<endl;
  }
return 0;
  }
