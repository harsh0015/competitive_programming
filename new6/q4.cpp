#include<bits/stdc++.h>
using namespace std;

int main(){

ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	
		int n;
	cin>>n;
	string a;
	cin>>a;
	bool ok= false;
	for(int i=0;i<n-1;i++){
		if(a[i] > a[i+1] && !ok){
			ok = true;
			continue;
		}
		cout<<a[i];
	}
	if(ok) cout<<a.back();
	cout<<"\n";
	}
