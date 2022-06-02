#include<bits/stdc++.h>
#define PI 3.141592653589793238462
#define eps 1e-20
#define fi first
#define se second
using namespace std;
using cd = complex<double>;
typedef long long ll;
typedef long double db;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<db,db> pdd;
mt19937 rnd(chrono::system_clock::now().time_since_epoch().count());
//rnd()%n,shuffle(a+1,a+n+1,rnd);
ll n;
ll cal(ll x){
    return ((1+n+1-x)*(n/x))/2;
}
int main(){
    cin>>n;
    set<ll> s;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll x=i,y=n/i;
            s.insert(cal(x));
            s.insert(cal(y));
        }
    }
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
}