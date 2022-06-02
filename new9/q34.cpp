#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k,i,sum=0,ans=0;
	cin>>n>>k;
	ll a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int pos=n-1;
	for(i=a[n-1];i>=a[0]+1;i--)
	{
		while(a[pos]>=i)
			pos--;
			sum=sum+n-1-pos;
			if(sum>k)
				sum=n-1-pos,ans++;
	}
	if(sum>0)
		ans++;
	cout<<ans;
}