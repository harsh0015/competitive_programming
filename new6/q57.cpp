#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){
    	string s;cin>>s;

    	bool flag1=true;

    	int count=0;
    	int ch=0;
    	 char y='p',z='r';
    	int ans=0;
    	bool flag2=false;

    	for(int i=0;i<n;i++){
    		if(s[i]=='?' && flag1){
    			count++;
    			continue;
    		}

    		if(s[i]!='?' && flag1){
    			flag1=false;
    			count++;
    			continue;
    		}
    		if(s[i]=='?' && !flag1 && !flag2){
    			y=s[i-1];
    			count++;
    			flag2=true;
    			ch++;
    			continue;
    		}
    		if(s[i]=='?' && !flag1 && flag2){
    			count++;
    			ch++;
    			continue;
    		}
    		if(s[i]!='?' && flag2){
    			z=s[i];
    			if((z==y && ch%2==1) ||(z!=y && ch%2==0) ){
    			    
    				ch=0;
    				y='p';z='p';
    				flag2=false;
    				i--;
    				continue;
    			}
    			else{
    				ans=ans+ (count*(count+1))/2;
    				count=0;
    				ch=0;
    				i--;
    				flag2=false;
    				continue;
    			}

    		}

    		if(s[i]!='?' && !flag2){
    			count++;
    			if(s[i+1]==s[i]){
    				ans=ans+ (count*(count+1))/2;
    				count=0;
    			}
    		}






    	}
    }
	
}