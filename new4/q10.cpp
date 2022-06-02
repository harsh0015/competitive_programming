#include<bits/stdc++.h>
 
using namespace std;
 
 
 
int main() {
	
	int q;
	cin>>q;
	while(q--) {
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}	
		sort(a,a+n);
		
		bool flag=1;
		for(int i=0;i<n-1;i++) {
			if (a[i]!=a[i+1]-1) flag=0;
		}
		if (flag && a[0]==0) cout<<n+k<<endl; else {
			
		    int max=a[n-1],mex=0;
		    if (a[0]==0) {
		    for(int i=0;i<n-1;i++) {
		    	if (a[i]!=a[i+1]-1) {
		    		mex=a[i]+1;
		    		break;
				}
			}}
			
		    int ch=(max+mex)/2+(max+mex)%2;
			bool flag1=1;
			for(int i=0;i<n;i++) {
				if (a[i]==ch) flag1=0;
			}
			if (k!=0) cout<<n+int(flag1)<<endl; else cout<<n<<endl;
		}
	}
	
	
	return 0;
}
