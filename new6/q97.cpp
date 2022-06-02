#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,f,a[300500];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		if(n%2)
		{
			f=1;
			for(int i=n/2;i;--i)
			{
				if(a[i]<i||a[n-1-i]<i)
				{
					f=0;
					cout<<"No"<<endl;
					break;
				}
			}
			if(f)
			cout<<"Yes"<<endl;
		}
		else
		{
			f=1;
			if(a[n/2]<n/2&&a[n/2-1]<n/2)
			{
				f=0;
				cout<<"No"<<endl;
			}
			for(int i=n/2-1;i;--i)
			{
				if(f&&(a[i]<i||a[n-1-i]<i))
				{
				
					cout<<"No"<<endl;
					f=0;
					break;
				}
			}
			if(f)
			cout<<"Yes"<<endl;
		}
	}
	return 0;
}