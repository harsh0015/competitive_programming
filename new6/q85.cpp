#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(a==0)return a;
	 if(b==0)return b;
	 if(a==b)return a;
	 if(a>b)return gcd(a-b,b);
	 return gcd(a,b-a);
}
int main()
{
	int tt;
	cin>>tt;
	while(tt--){
		int n;
		cin>>n;
		vector<int>v(n);
		vector<int>ans;
		int p=0,index=0,q=0;
		for(int i=0;i<n;i++)cin>>v[i];
		sort(v.begin(),v.end());
		ans.push_back(v[n-1]);
		int temp=v[n-1];
		v.erase(v.begin()+n-1);
		for(int i=0;i<n-1;i++){
			for(int j=0;j<v.size();j++){
				if(gcd(v[j],temp)>p){
					p=gcd(v[j],temp);
					index=j;
				}
			}
			ans.push_back(v[index]);
			v.erase(v.begin()+index);
			q++;
			temp=p;
			p=0;
//			cout<<i<<endl;
		}
		for(auto it:ans)cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
