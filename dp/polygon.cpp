#include<bits/stdc++.h>
using namespace std;
int t,n,flg;
char c[60][60];
int main(){
	cin>>t;
	while(t--){
		flg=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>c[i];
		for(int i=0;i<n-1;i++)
			for(int j=0;j<n-1;j++)
				if(c[i][j]=='1'&&c[i+1][j]=='0'&&c[i][j+1]=='0') flg=1;
		cout<<(flg?"NO\n":"YES\n");
	}
	return 0;
}