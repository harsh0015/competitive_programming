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


struct cmp {
    bool operator() (const pair<int, int> &a, const pair<int, int> &b) const {
        int lena = a.second - a.first + 1;
        int lenb = b.second - b.first + 1;
        if (lena == lenb) return a.first < b.first;
        return lena > lenb;
    }
};

 
void solve(){
   
   int n;cin>>n;
  set<pair<int, int>, cmp> st;
   int arr[n];
   st.insert({0,n-1});

   for(int i=1;i<=n;i++){
    pair<int,int>p=*st.begin();
    st.erase(st.begin());

    int h= (p.first+p.second)/2;
    arr[h]=i;
    if(h>p.first){
        st.insert({p.first,h-1});
    }
    if(h<p.second){
        st.insert({h+1,p.second});
    }
   }

  for(int i=0;i<n;i++)cout <<arr[i]<<" ";

    cout <<endl;
 
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