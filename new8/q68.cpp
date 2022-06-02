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
 vector<string>v;

 for(int i=0;i<n;i++){
    string s;cin>>s;

    v.push_back(s);
 }
 int count[6];
 for(int i=1;i<6;i++)count[i]=0;

 for(int i=0;i<n;i++){
    string s=v[i];

    for(int j=0;j<s.length();j++){
      count[(s[j]-'a')+1]++;
    }
 }

 int x=1;
 int ma=0;

 for(int i=1;i<6;i++){
    if(count[i]>ma){
        ma=count[i];
        x=i;
    }
 }
 // cout <<x<<"*"<<ma<<endl;


vector<pair<int,int>>v1;
 vector<int>v2;

for(int i=0;i<n;i++){
    int arr[6];
     for(int i=1;i<6;i++)arr[i]=0;
    string s=v[i];
    for(int j=0;j<s.length();j++){
        arr[(s[j]-'a')+1]++;
    }

    int total=0;
    for(int j=1;j<6;j++){
        if(j!=x)total=total+arr[j];
    }

    v1.push_back({total,arr[x]});
    v2.push_back(total-arr[x]);

}

int total=0;
int p=0;

for(int i=0;i<v1.size();i++){
    total=total+v1[i].first;

    p=p+v1[i].second;

}
// cout <<total<<" "<<p<<"&"<<endl;
int u=p-total;

int ans=n;

// sort(v1.begin(), v1.end());

sort(v2.begin(), v2.end());

// for(int i=0;i<v2.size();i++)cout <<v2[i]<<" ";
// cout <<endl;
// cout <<"*"<<u<<endl;

// bool flag=false;
int i=v2.size()-1;

if(p>total){
    cout <<n<<endl;
    return;
}

while(u<=0 && i>=0){
       // total=total-v1[i].first;
       // p=p-v1[i].second;
       u=u+v2[i];
       ans--;
       i--;

}

// if(ans<=0){
//     cout <<0<<endl;
//     return;
// }

cout<<ans<<endl;


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