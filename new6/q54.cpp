#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	

	int t;cin>>t;

	while(t--){

		int a,b,c,d;cin>>a>>b>>c>>d;

		int m1=max(a,b);
		int m2=max(c,d);

		if(min(a,b)>max(c,d) || min(c,d)>max(a,b)){
			cout <<"NO"<<endl;
		}
		else cout <<"YES"<<endl;
	}
}