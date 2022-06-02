#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 128;

typedef long long ll;





void solve()
{
	int n, k;
	cin >> n >> k;
	
		
    vector<vector<int>>adj;
     for(int i=0;i<n;i++){
        vector<int>v;
        adj.push_back(v);
     }
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
   cout <<"YE";
	
}

int main()
{
	int t;
	cin >> t;
	while (t--) solve();
	return 0;
}