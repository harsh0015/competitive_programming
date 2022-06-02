#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define vi vector<ll>
 
void solve()
{
    ll n,c1,c2,c3,c4,i,x,q;
    char ch;
    cin>>n;
    
    vi a(n),cnt(100001,0);
    
    for(i=0;i<n;i++)
        cin>>a[i],cnt[a[i]]++;
        
    c1=c2=c3=c4=0;
    for(i=0;i<=100000;i++)
    {
        if(cnt[i]>=8)
            c1++;
        else if(cnt[i]>=6)
            c2++;
        else if(cnt[i]>=4)
            c3++;
        else if(cnt[i]>=2)
            c4++;
    }
   
    cin>>q; 
    for(i=1;i<=q;i++)
    {
        cin>>ch;
        cin>>x;
        
        if(ch=='+')
        {
            if(cnt[x]==7)
                c1++,c2--;
            else if(cnt[x]==5)
                c2++,c3--;
            else if(cnt[x]==3)
                c3++,c4--;
            else if(cnt[x]==1)
                c4++;
            cnt[x]++;
        }
        else
        {
            if(cnt[x]==8)
                c1--,c2++;
            else if(cnt[x]==6)
                c2--,c3++;
            else if(cnt[x]==4)
                c3--,c4++;
            else if(cnt[x]==2)
                c4--;
            cnt[x]--;
        }
        if(c1>0 || (c2>0 && (c3>0 || c4>0)) || (c2>1) || (c3>0 && c4>1) || (c3>1))
            cout<<"YES\n";
        else 
            cout<<"NO\n";
        
    }
}
 
int main()
{
   ll t=1;
   //cin>>t;
 
   while(t--)
   {
       solve();
   }
   return 0;
}