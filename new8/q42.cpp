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
ll n,k;cin>>n>>k;

vector<ll>v;

while(n>0){
    v.push_back(n%2);
    n=n/2;
}

reverse(v.begin(), v.end());

ll count=0;

for(ll i=0;i<v.size();i++){
    if(v[i]==1)count++;
}

if(k<count){
    cout <<"NO"<<endl;
}
else{
    ll i=0;
    // bool flag=false;

    while(i<v.size()-1){

        if(count==k){
            // flag=true;
            break;
        }
        if(k-count>=v[i]){

            v[i+1]=v[i+1]+2*v[i];
            count=count+v[i];
            v[i]=0;
        }
        else {
            v[i]=v[i]-(k-count);
            v[i+1]=v[i+1]+2*(k-count);
            count=k;
        }
        i++;
    }

    if(k!=count){
    cout <<"NO"<<endl;
    return;
}
else {
    cout<<"YES"<<endl;
    reverse(v.begin(), v.end());
    ll c=1;
    for(ll i=0;i<v.size();i++){
        while(v[i]--){
            cout <<c<<" ";
        }
        c=c*2;
    }
}
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