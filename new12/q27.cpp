#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<int(n);i++)
#define forsn(i,s,n) for(int i=int(s);i<int(n);i++)
 
typedef long long ll;
using namespace std;
/**
**/
 
const int mod = 1e9+7;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll p=-1;
    for (ll x = 2; x*x <= n; x++) {
        if(n%x==0){
            p = x;
            break;
        }
    }
    if(p==-1){
        cout << n;
        return 0;
    }
    while(n%p==0){
        n /= p;
    }
    //if more than one prime divisor 1
    //if only one prime divisor then print the divisor
    if(n>1){
        cout << 1;
    }
    else{
        cout << p;
    }
}