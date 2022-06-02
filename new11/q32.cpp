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

struct FenwickTree{
    vector<ll> bit;
    ll n;

    FenwickTree(ll n){
        this->n=n+1;//for zero base index
        bit.assign(n+1,0LL);
    }
    void add(ll ind,ll val){
        for(++ind,ind<n;ind<n;ind += ind & -ind)
            bit[ind]+=val;
    }
    void range_add(ll l,ll r,ll val){
        add(l,val);
        add(r+1,-val);
    }

    ll get(ll ind){
        ll ret=0;
        for(++ind;ind>0LL;ind-=ind & -ind)
            ret+=bit[ind];
        return ret;
    }

    ll get_range_sum(ll x){//from 1,x;
        ll ret =0;
        x++;
        while(x>0){
            ret+=bit[x];
            x-=x&-x;
        }
        return ret;

    }
    void update(ll ind ,ll val){
        ind++;
        while(ind <=n){
            bit[ind]+=val;
            ind += ind & -ind;
        }
    }
};




 
void solve(){

    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    FenwickTree ft(n);

    for(int i=0;i<n;i++){
      ft.update(i,arr[i]);
    }

   cout << ft.get(3);

    

}
 
 
int main(){
    fastio;
 
    int t = 1;
    cin>>t;
   
    while(t--){
        solve();
    }
    return 0;
}