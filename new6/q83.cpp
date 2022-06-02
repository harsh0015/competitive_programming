#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define f first
#define s second
#define pb push_back
#define mod 1000000007
#define all(arr) arr.begin(),arr.end()
 
void solve()
{
	int n,k,cnt;
	cin>>n>>k;
	string s;
	cin>>s;
	int one = 0 , zer = 0 , que = 0;
	for(int i=0;i<k;i++){
		if(s[i] == '1') one++;
		else if(s[i] == '0') zer++;
		else que++;
	}
	if(one > k/2 || zer > k/2){
		cout<<"NO\n";return;
	}
	int onef = 0 , zerf = 0;
	for(int i=0;i<k;i++){
		one = 0 , zer = 0 , que = 0;
		for(int j=i;j<n;j+=k){
			if(s[j] == '1') one++;
		    else if(s[j] == '0') zer++;
		    else que++;
		}
		if(one != 0 && zer != 0){
			cout<<"NO\n";return;
		}
		else if(one!=0) onef++;
		else if(zer!=0) zerf++;
	}
	if(onef > k/2 || zerf > k/2){
		cout<<"NO\n";return;
	}
	cout<<"YES\n";
}
 
 
int main() 
{
	fast;
	int t;
	t=1;
	cin>>t;
	while(t--){solve();}
    return 0;
}