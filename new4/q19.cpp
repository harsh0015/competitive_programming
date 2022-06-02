#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
 
int main()
{
 
	int t;
	cin>>t;
 
	while(t--)
	{
		int n;
		cin>>n;
 
		ll a[n+1];
		set<ll>s;
 
		ll mx=-1;
 
		for(int i=1; i<=n; i++)
		{
			cin>>a[i];
			mx=max(mx,a[i]);
		}
 
 
 
		for(int i=2; i<=n; i++)
			s.insert(a[i]-a[i-1]) ;
 
 
		int sz=s.size();
 
		if(sz<=1)
		{
			cout<<0<<endl;
		}
		else if(sz>2)
		{
			cout<<-1<<endl;
		}
		else
		{
			ll c= *s.rbegin() ;
			ll diff=*s.begin() ;
 
			ll m= abs(diff)+c ;
			
			if(m<=mx) cout<<-1<<endl;
			else cout<<m<<" "<<c<<endl;
		}
 
 
 
 
 
 
 
	}
 
 
 
 
}
