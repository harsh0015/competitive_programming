#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define tp(a,n) for(ll i=0;i<n;i++) cin>>a[i]
#define f(i,x,n) for(ll i=x;i<n;i++)
#define fr(i,x,n) for(ll i=n-1;i>=0;i--)
#define pb push_back
#define vl vector<ll>
#define mi map<int,int>
#define mp make_pair
#define all(a) a.begin(),a.end()
#define M 1000000007
 
 
int main() {
    
ll t;
//cin>>t;
t=1;
while(t--)
{
    ll n;
    cin>>n;
    ll u=2*n;
    vl a(u);
    tp(a,u);
    ll c=n%2==0?4:2*n,p=-1;
   f(i,0,c)
   {
      if(is_sorted(all(a)))
      {
           p=i;
           break;
      }
      if(i%2)
      f(k,0,n)swap(a[k],a[k+n]);
      else
      for(ll j=0;j<n+n;j+=2)swap(a[j],a[j+1]);
 
   }
cout<<min(p,c-p)<<endl;
}
}