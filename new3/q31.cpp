// // #include<stdc++.h>
// // using namespace std;

// // int main(){

// // 	int t;cin >>t;

// // 	while(t--){

// // 		string s1,s2;cin >>s1>>s2;

// // 		unoredred_map<char,pair<int ,int >>m;

// // 		for(int i=0;i<s1.length();i++){
// // 			if(m.find(s[i])==m.end()){
// // 				m[s[i]].first=i;
// // 				m[s[i]].second]=i;

// // 			}
// // 			else m[s[i]].second=i;
// // 		}


// // 		int max=0;

// // 		for(int i=1;i<s2.length();i++){
// // 			for(int j=0;j<i;j++){
// // 				if(m[s2[j]].first<m[s2[i]])
// // 			}
// // 		}
// // 	}
// // }


// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main(){

// 	ll n,m;cin >>n>>m;

// 	string s1,s2;cin >>s1>>s2;

// 	ll maxi=0;

// 	ll a=0;ll b=0;

// 	while(s1[a]!=s2[b]){
// 		a++;
// 	}

// 	for(ll i=1;i<m;i++){
// 		b=i;
// 		ll r=-1;
// 		for(ll j=n-1;j>a;j--)
// 		{
//            if(s1[j]==s2[b]){
            
//             bool flag=true;

//             int x=j+1;
//             int y=b+1;

//             while(x!=n){
//             	if(s1[x]==s2[y]){
//             		x++;y++;
//             		continue;
//             	}
//             	x++;
//             }
              
//               if(y==m){
//               	r=j;
//             break;
//               }
//               else continue;

            
//            }
// 		}

// 		// cout <<"*"<<r<<"*"<<endl;

// 		if(r==-1)break;
// 		else maxi=max(maxi,r-a);

// 		for(ll j=a+1;j<n;j++){
// 			if(s1[j]==s2[b]){
// 				a=j;
// 				break;
// 			}
// 		}


// 	}
// 	cout <<maxi<<endl;
// }

#include <bits/stdc++.h>
 
#define fi first
#define se second
#define ll long long
#define dl double long
 
using namespace std;
 
const int N = 3e5 + 7;
const long long mod = 998244353;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void solve()
{
    int n,m;
    string s,t;
    cin >> n >> m >> s >> t;
    s = '#' + s;
    t = '#' + t;
    vector<int> l(m + 1 , 0) , r(m + 1,  0);
    for(int i = 1 , j = 1; i <= m; i++){
        while( j <= n && t[i] != s[j] ){
            j++;
        }
        l[i] = j;
        j++;
    }
    for(int i = m , j = n; i >= 1; i--){
        while( j >= 1 && t[i] != s[j] ){
            j--;
        }
        r[i] = j;
        j--;
    }
    int ans = 0;
    for(int i = 1; i < m; i++){
        if(l[i] < r[i + 1]){
            ans = max(ans , r[i + 1] - l[i]);
        }
    }
    cout << ans;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    //freopen( "input.txt" , "r" , stdin );
    //freopen( "output.txt" , "w" , stdout );
 
    int T = 1;
    //cin >> T;
    while( T-- ){
        solve();
    }
}