#include <iostream>
using namespace std;
 
int pn(int x)
{
	int ans=0;
	for(int i=2; i*i<=x; i++)
		while(x%i==0)
		{
			ans++;
			x/=i;
			if(x==1)break;
		}
	if(x>1)ans++;
	return ans;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int a,b,k;
		cin>>a>>b>>k;
		int na=pn(a),nb=pn(b);
		if(k==1&&(a%b==0||b%a==0)&&a!=b)
			cout<<"YES"<<endl;
		else if(k>=2&&k<=na+nb)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}