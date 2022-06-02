#include<bits/stdc++.h>
#define ll long long
#define pii pair<int,int>
using namespace std;
const int mxn=1e5+5;
const int inf=1e9;
void solve() {
	int n;
	cin >> n;

	int a[n + 1];
	int b[n + 1];
	int cnt[n + 1] = {};
	int res = 0;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
		if(!cnt[a[i]]) {
			res++;
			b[i] = a[i];
			cnt[a[i]] = i;
		} else {
			b[i] = -1;
		}

	}

	vector<int> v;

	for(int i = 1; i <= n; i++) if(!cnt[i]) v.push_back(i);

	cout<<res<<endl;

	for(int i = 1; i <= n; i++) {
		
		if(b[i] == -1) {
			b[i] = v.back();
			v.pop_back();
			if(b[i] == i && !v.empty()) {
				int x = b[i];
				b[i] = v.back();
				v.pop_back();
				v.push_back(x);
			} else if(b[i] == i) {
				swap(b[cnt[a[i]]],b[i]);
			}
		}
	}	

	for(int i = 1; i <= n; i++) cout<<b[i]<<" ";
	cout<<endl;

}
int main() {

	int t=1;
	cin>>t;
	while(t--)solve();
	
}