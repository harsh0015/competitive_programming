#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;


 
void solve(){
int n;cin>>n;
int arr[n+1];
for(int i=0;i<n+1;i++)arr[i]=0;

	vector<pair<int,int>>v;

for(int i=0;i<n-1;i++){
	int a,b;cin>>a>>b;
	v.push_back({a,b});
	arr[a]++;
	arr[b]++;
}
int k;
bool flag=false;

for(int i=1;i<=n;i++){
	if(arr[i]>=3){
		flag=true;
		k=i;
	}
}


    if(!flag){
    	for(int i=0;i<n-1;i++){
    		cout <<i<<endl;
    	}
    	return;
    } 
    else{
    	int arr1[n-1];
    	for(int i=0;i<n-1;i++)arr1[i]=-1;
    		int c=0;
    	for(int i=0;i<n-1;i++){
    		if(c>2)break;
    		if(v[i].first==k || v[i].second==k){
    			arr1[i]=c;
    			c++;
    		}
    	}
    	for(int i=0;i<n-1;i++){
    		if(arr1[i]==-1){
    			arr1[i]=c;
    			c++;
    		}
    	}

    	for(int i=0;i<n-1;i++)cout<<arr1[i]<<endl;
    }

}
 
 
int main(){
    fastio;
 
    int t = 1;
    
   
    while(t--){
        solve();
    }
    return 0;
}