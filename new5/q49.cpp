#include<bits/stdc++.h>
using namespace std;

int  main(){

	int t;cin>>t;

	while(t--){
		int n;cin>>n;
		string s1,s2;cin>>s1>>s2;

		int zero[n],one[n];
		if(s1[0]=='0'){
			zero[0]=1;
			one[0]=0;
		}
		else {
			zero[0]=0;
			one[0]=1;
		}

		for(int i=1;i<n;i++){
			if(s1[i]=='0'){
				zero[i]=zero[i-1]+1;
				one[i]=one[i-1];
			}
			else{
				zero[i]=zero[i-1];
				one[i]=one[i-1]+1;
			}
		}

		int trans=0;
		bool flag=true;

		for(int i=n-1;i>=0;i--){
			if(s1[i]!=s2[i] && trans%2==0){
                
                if(zero[i]!=one[i]){
                	flag=false;
                	break;
                }
                else {
                	trans++;
                }
                continue;
			}
			else{
				if(s1[i]==s2[i] && trans%2==1){
                
                if(zero[i]!=one[i]){
                	flag=false;
                	break;
                }
                else {
                	trans++;
                }
                continue;
			}

		}
	}

		if(flag)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}