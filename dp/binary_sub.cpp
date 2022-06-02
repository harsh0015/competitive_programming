// 
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int t,n,q,l,r;
	int f=1;
	cin>>t;
	while(t--){
	cin>>n>>q;
	cin>>s;
	for(int i=0;i<q;++i){
		cin>>l>>r;
		--l;--r;
	f=1;
	for(int i=0;i<l;++i){
		if(s[i]==s[l]){
			f=2;
			break;
		}
	}
	if(f!=2)
	for(int i=r+1;i<n;++i){
		if(s[i]==s[r]){
			f=2;
			break;
		}
	}
	if(f==2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
}
	return 0;
}
