#include <bits/stdc++.h>
using namespace std;
using ll=long long;


void solve(){
    string s; cin>>s;
    ll n=s.length();
    ll a=1;
    ll b=1;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'){
            cout<<a<<" 1"<<endl;
            a++;
            if(a==5) a=1;
        }
        else{
            if(b==1){
                cout<<"1 4"<<endl; b=0;
            }
            else{
                cout<<"3 4"<<endl; b=1;
            }
        }
    }
    
    
}

int main() {
	int t=1; 
	while(t--){
	    solve();
	    
	}
}
