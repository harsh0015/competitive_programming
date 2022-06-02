#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){

    	int n,k;cin>>n>>k;
         string s;cin>>s;

        int ans=0;
        for(int i=0;i<k/2;i++){

        	int cnt[26]={};

        	for(int j=0;j+k-1<n;j=j+k){
        		int a=j+i;
        		int b= j+ k-1-i;

        		cnt[s[a]-'a']++;
        		cnt[s[b]-'a']++;
        	}

        	int mx=*max_element(cnt,cnt+26);

        	ans=ans+ (2*(n/k)-mx);
        }

        if(k%2==1){
        	int cnt[26]={};

        	for(int j=k/2;j<n;j=j+k){
     
        		cnt[s[j]-'a']++;
        	}

        	int mx=*max_element(cnt,cnt+26);

        	ans=ans+ ((n/k)-mx);
        }

        cout <<ans<<endl;

    }
	
}