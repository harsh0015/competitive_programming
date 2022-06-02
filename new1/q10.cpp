#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll t;cin>>t;
   while(t--)
   {
       ll n;cin>>n;ll a[n];
       ll sum=0;ll pum=0;
       for(ll i=0;i<n;i++)
       {cin>>a[i];
           if(i%2==0)
            sum+=a[i];
           else
            pum+=a[i];
       }
       if(sum>=pum)
       {
           for(ll x=0;x<n;x++)
           {
               if(x%2==0)
                cout<<a[x]<<" ";
               else
                cout<<1<<" ";
           }
       }
       else
       {
           for(ll x=0;x<n;x++)
           {
               if(x%2!=0)
                cout<<a[x]<<" ";
               else
                cout<<1<<" ";
           }
       }
       cout<<"\n";
   }
}