#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t;cin>>t;while(t--)
#define pb push_back
#define endl '\n'
#define rep(i,x,y) for(auto i=x;i<=y;i++)
#define repi(i,x,y) for(auto i=x;i>=y;i--)
#define for_each(v,a) for(auto &v:a)
#define arr_in(a) for_each(v,a) cin>>v
#define pii pair<int,int>
#define ff first
#define ss second
#define u_map unordered_map
#define u_set unordered_set

//define the size of the set bit
#define B 40
//

#define mod 1000000007


typedef unsigned long long ull;
typedef long long ll;
using namespace std;
//using namespace boost::multiprecision;


template<typename T>
inline T modv(T v,T m) { return ((v%m)+m)%m;}

/*
    workplace start from here
*/



void solve(){
    int n,m;
    cin>>n>>m;
    
    vector<ll> vec;
    string s;
    ll count,inv=0;
    for(int i=0;i<n;i++){
        cin>>s;
        count = 0;
        for(int i=0;i<m;i++){
            if(s[i]=='1') count++;
            else inv+=count;
        }
        vec.push_back(count);
    }
    sort(vec.begin(),vec.end()); 
    
    // ,[](pii a,pii b){
    //     return (a.ff < b.ff) || (a.ff == b.ff && a.ss<b.ss);
    // }

    count = 0;
    
    for_each(p,vec){
        inv+=count*(m-p);
        count+=p;
    }
    cout<<inv;
}

int main() {
    


    fastio;
    
    test{
        solve();
        cout<<endl;
    }
    
    return 0;
}