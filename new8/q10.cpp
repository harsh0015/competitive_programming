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

 vector<int> odd,even;

 for(int i=0;i<n;i++){
 	int x;cin>>x;

 	if(i%2==0)odd.push_back(x);
 	else even.push_back(x);
 }

 sort(odd.begin(), odd.end());
 sort(even.begin(), even.end());



 int i=0,j=0;
 int count=0;
 vector<int>res;

 while(count<n){
 	count++;
 	if(count%2==1){
      res.push_back(odd[i]);
      i++;
 	}
 	else{
 		  res.push_back(even[j]);
      j++;
 	}
 }

 // while(i<odd.size()){
 // 	 res.push_back(odd[i]);
 //      i++;
 // }

 // while(j<even.size()){
 // 	 res.push_back(even[j]);
 //      j++;
 // }

bool flag=true;

for(int i=1;i<n;i++)
{
	if(res[i]<res[i-1]){
		flag=false;
		break;
	}
}

if(flag)cout <<"YES"<<endl;
else cout <<"NO"<<endl;
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}