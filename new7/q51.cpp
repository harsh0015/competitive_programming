#include <bits/stdc++.h>
using namespace std;
#define maxN 100005
#define ll long long
#define ld long double
#define V vector
#define pb push_back

int main()
{
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;char m[2][n];
        for(ll i=0;i<2;i++){
            for(ll j=0;j<n;j++){
                cin>>m[i][j];
            }
        }
        ll i=0,j=0;int ans=1;
        while(j<n){
            if(m[i][j]=='1'||m[i][j]=='2')j++;
            else{
                if(i==0){
                    i=1;
                    if(m[i][j]=='1'||m[i][j]=='2'){ans=0;break;}
                    else {j++;}
                }
                else{
                    i=0;
                    if(m[i][j]=='1'||m[i][j]=='2'){ans=0;break;}
                    else {j++;}
                }
            }
        }
        if(i==0||j!=n)ans=0;
        if(ans==0){cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
    }
}
