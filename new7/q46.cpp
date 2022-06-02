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
 
 ld c,m,p,v;
 cin>>c>>m>>p>>v;

ld ans;
ans=p;

for(int i=1;i<1000;i++){
    for(int j=0;j<1000;j++){
        int count=0;
        int count2=0;
        ld c1=c,m1=m,p1=p;
        bool flag1=true;
        bool flag2=true;

        ld ans1=1;
        while( count<=i){
            count++;
           if(c1<=v){
              if(count==i){
                m1=m1+ c1/2;
                p1=p1+c1/2;
                c1=0;
                ans1=ans1*c1;
              }
              else {
                flag1=false;
                break;
              }
           }
           else {
            if(count>i)break;
            else{
                 m1=m1+ (c1-v)/2;
                p1=p1+(c1-v)/2;
                ans1=ans1*c1;
                c1=c1-v;

            }
           }
        }

        // 
         while( count2<=j){
            count2++;
           if(m1<=v){
              if(count2==j){

                if(c1!=0){
                    c1=c1+ m1/2;
                p1=p1+m1/2;
                }
                else{
                    p1=p1+m1;
                }
                ans1=ans1*m1;
                m1=0;
              }
              else {
                flag2=false;
                break;
              }
           }
           else {
            if(count2>j)break;
            else{

                if(c1!=0){

                 c1=c1+ (m1-v)/2;
                 p1=p1+(m1-v)/2;
                 ans1=ans1*m1;
                m1=m1-v;
                }
                else{
                     p1=p1+(m1-v);
                     ans1=ans1*m1;
                m1=m1-v;
                }
                
            }
           }
        }
  
     if(flag1 && flag2){
        ans=ans+ans1*p1;
     }


     /////////888888

    }
}


///////////////////


for(int i=1;i<1000;i++){
    for(int j=0;j<1000;j++){
        int count=0;
        int count2=0;
        ld c1=c,m1=m,p1=p;
        bool flag1=true;
        bool flag2=true;
        ld ans1=1;
        while( count<=i){
            count++;
           if(m1<=v){
              if(count==i){
                c1=c1+ m1/2;
                p1=p1+m1/2;
                c1=0;
                ans1=ans1*m1;
              }
              else {
                flag1=false;
                break;
              }
           }
           else {
            if(count>i)break;
            else{
                 c1=c1+ (m1-v)/2;
                p1=p1+(m1-v)/2;
                ans1=ans1*m1;
                m1=m1-v;

            }
           }
        }

        // 
         while( count2<=j){
            count2++;
           if(c1<=v){
              if(count2==j){

                if(m1!=0){
                    m1=m1+ c1/2;
                p1=p1+c1/2;
                }
                else{
                    p1=p1+c1;
                }
                ans1=ans1*c1;
                m1=0;
              }
              else {
                flag2=false;
                break;
              }
           }
           else {
            if(count2>j)break;
            else{

                if(m1!=0){

                 m1=m1+ (c1-v)/2;
                 p1=p1+(c1-v)/2;
                 ans1=ans1*c1;
                c1=c1-v;
                }
                else{
                     p1=p1+(c1-v);
                     ans1=ans1*c1;
                c1=c1-v;
                }
                
            }
           }
        }
  
     if(flag1 && flag2){
        ans=ans+ans1*p1;
     }


     /////////888888

    }
}



cout <<ans<<endl;
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