#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long int a[n],i;
		int cnt[m+1]={0};
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			cnt[a[i]%m]++;
		}
		long int cn=0;
		for(i=1;i<= m/2;i++)
		{
			if(cnt[i] or cnt[m-i]){
				cn += 1+ max(abs(cnt[i]-cnt[m-i]) -1,0) ;
			}
		}
		if(cnt[0])
			cn+=1;
 
			cout<<cn<<"\n";
	}
	return 0;
}