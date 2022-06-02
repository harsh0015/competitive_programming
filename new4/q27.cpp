#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,d;
    ll mx=0,k=1;
    ll ar[10]={0};
    cin >> n;
 
    while (n){
        d = n % 10;
        mx = max(mx, d);
        ///cout<<"Maximum value is : "<<mx<<endl;
        for (ll i = 0;i<d; i++)
        {
             ar[i] += k;
             ///cout<<"Value of ar[i] is : "<<ar[i]<<endl;
        }
 
        k *= 10; n /= 10;
       /// cout<<"Value of up is : "<<up<<endl;
        ///cout<<"Value of n is : "<<n<<endl;
    }
 
 
    cout << mx << endl;
    for (ll i = 0; i < mx; i++) {
        cout << ar[i] << " ";
    }cout<<endl;
    return 0;
}
 