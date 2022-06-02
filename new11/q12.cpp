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

   int counta=0,countb=0;
   for(int i=0;i<n;i++){
    if(s1[i]=='a')counta++;
    else countb++;

    if(s2[i]=='a')counta++;
    else countb++;
   }
   
   if(counta%2==1 || countb%2==1){
    cout <<-1<<endl;
    return;
   }

   int count=0;
   int count1=0;
   vector<int>a,b;
   for(int i=0;i<n;i++){
    if(s1[i]!=s2[i]){
        count1++;
        
        if(s1[i]=='a')a.push_back(i+1);
        else b.push_back(i+1);
    }
   }
  // if(count1==0){
  //   cout<<0<<endl;
  //   return;
  // }

  vector<pair<int,int>>fin;

  if(a.size()>1){
      for(int i=0;i<a.size()-1;i=i+2){
       count++;
       fin.push_back({a[i],a[i+1]});
  }
  }




   if(b.size()>1){
    for(int i=0;i<b.size()-1;i=i+2){
       count++;
       fin.push_back({b[i],b[i+1]});
  }

   }
     


    if(a.size()%2==1){
        count+=2;
        fin.push_back({a[a.size()-1],a[a.size()-1]});
             fin.push_back({a[a.size()-1],b[b.size()-1]});

    }

    cout <<count<<endl;
    for(int i=0;i<fin.size();i++){
        cout <<fin[i].first<<" "<<fin[i].second<<endl;
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