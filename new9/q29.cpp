#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ll t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v1(n),v2(n);
        for(i=0; i<n; i++){
            cin>>v1[i];
        }
        for(i=0; i<n; i++){
            cin>>v2[i];
        }
        vector<ll>v;
        ll c,mi=INT_MAX;
        for(i=0; i<n; i++){
            c=v1[0]+v2[i];
            c=c%n;
            mi=min(mi,c);
        }
        for(i=0; i<n; i++){
            c=v1[0]+v2[i];
            c=c%n;
            if(c==mi){
                v.pb(i);
            }
        }
        if(v.size()==1){
            ll a = v[0];
            ll p=0;
            for(ll j=a; j<n; j++,p++){
                cout<<(v1[p]+v2[j])%n<<" ";
            }
            for(ll j=0; j<a; j++,p++){
                cout<<(v1[p]+v2[j])%n<<" ";
            }
        }else{
            vector<ll>arr1;
            vector<ll>arr2;
            ll a = v[0],p=0;
        
            for(ll j=a; j<n; j++,p++){
             
                arr1.pb((v1[p]+v2[j])%n);
            }
            for(ll j=0; j<a; j++,p++)
            {

                arr1.pb((v1[p]+v2[j])%n);
            }
            a=v[1];
            p=0;
    
            for(ll j=a; j<n; j++,p++){
			    arr2.pb((v1[p]+v2[j])%n);
            }
            for(ll j=0; j<a; j++,p++){
                arr2.pb((v1[p]+v2[j])%n);
            }
            if(arr1<arr2){
                for(i=0; i<n; i++){
                    cout<<arr1[i]<<" ";
                }
            }
            else{
                for(i=0; i<n; i++){
                    cout<<arr2[i]<<" ";
                }
            }
        }
        cout<<endl;
    }
}