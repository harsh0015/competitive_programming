#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

ll factorial(ll n)    
{    
if(n<0)    
return(-1); /*Wrong value*/      
if(n==0)    
return(1);  /*Terminating condition*/    
else    
{    
return(n*factorial(n-1));        
}    
}  


ll solve(ll n){

	ll ans =0;
	for(ll i=0;i<=n/2;i++){
    ans =ans+ (factorial(n-i))/(factorial(n-2*i)*factorial(i));
	}

	return ans;
}

int main(){

	string s;cin >>s;

	ll ans=1;
    
    for(ll i=0;i<s.length();i++){
    	if(s[i]=='m'||s[i]=='w'){
    		cout << 0;
    		return 0;
    	}
    	
    }
	

	bool f1=false;
	bool f2=false;
	char check;

	vector<int >v;

	for(ll i=0;i<s.length();i++){
		if(s[i]=='u'|| s[i]=='n'){
			ll count =1;
			ll j;
			for( j=i+1;j<s.length();j++){
				if(s[j]==s[i])
					count++;

				if(s[j]!=s[i])
					break;
			}

			ans =ans*solve(count);
			i=j-1;
			continue;
		}
	}

	cout <<ans%ll(pow(10,9)+7);

}