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

 string s1,s2;cin>>s1>>s2;

 vector<pair<int,int>>v;
 int count1=0,count2=0;
 int arr1[n],arr2[n];
 stack<int>st1,st2,st3,st4;

 for(int i=0;i<n;i++){
    arr1[i]=0;
    arr2[i]=0;
 }
 // cout <<"h2"<<endl;

 unordered_map<char ,stack<int>>m1,m2;
 for(int i=0;i<n;i++){

    if(s1[i]!='?')
      m1[s1[i]].push(i);

else {
    arr1[i]=2;
    st1.push(i);
    count1++;
}
 }

 for(int i=0;i<n;i++){
      if(s2[i]!='?'){
        if(m1.find(s2[i])!=m1.end()){
       v.push_back({m1[s2[i]].top(),i});
        arr1[m1[s2[i]].top()]=1;
        arr2[i]=1;
       m1[s2[i]].pop(); 

       if( m1[s2[i]].empty())
           m1.erase(s2[i]);
    }
      }
    

    else {
        arr2[i]=2;
        st2.push(i);
    }
 }
// cout <<st1.size()<<" "<<st2.size()<<endl;
 for(int i=0;i<n;i++){
    if(arr1[i]==0)st3.push(i);
    if(arr2[i]==0)st4.push(i);
 }
 // cout <<st3.size()<<" "<<st4.size()<<endl;

 while(!st3.empty() && !st2.empty()){
    // cout <<"j"<<endl;
    v.push_back({st3.top(),st2.top()});
    st3.pop();
    st2.pop();
 }
 // cout <<"%"<<st3.size()<<" "<<st4.size()<<endl;


 while(!st4.empty() && !st1.empty()){
    // cout <<"l"<<endl;
    v.push_back({st1.top(),st4.top()});
    st1.pop();
    st4.pop();
 }
 // cout <<"#"<<st1.size()<<" "<<st2.size()<<endl;

 while(!st1.empty() && !st2.empty()){
      v.push_back({st1.top(),st2.top()});
    st1.pop();
    st2.pop();
 }
cout <<v.size()<<endl;
 for(int i=0;i<v.size();i++){
    cout <<v[i].first+1 <<" "<<v[i].second+1<<endl;
 }
 cout <<endl;
}


int main(){
    fastio;

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}