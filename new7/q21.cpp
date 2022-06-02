#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
#define pb push_back
 
 
int main() {
ll t;
t=1;
 
while(t--)
{
   ll n;
   cin>>n;
   ll a[n];
   unordered_set<ll>x;
   for(ll i=0;i<n;i++){
    cin>>a[i];
    x.insert(a[i]);}
    if(x.size()>3)
    {
        cout<<-1<<endl;
        continue;
    }
   sort(a,a+n);
   ll c=0,m=0;
  set<ll>s;
 
   for(ll i=1;i<n;i++)
   {
       if(a[i]-a[i-1]>0)
       {
          m=a[i]-a[i-1];
          s.insert(m);
       }
   }
 
   if(s.size()<=1)
   {
    if(m%2==0&&x.size()==2)
    {
        m=m/2;
    }
    cout<<m<<endl;
   }
   else
    cout<<-1<<endl;
 
}
 
 
 
}