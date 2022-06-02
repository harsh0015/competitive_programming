#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

ll modpow(ll a, ll b, ll mod) {
    a %=mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    res=res%mod;
    return res;
}

bool checkPrime(ll x){
    for(ll i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int gcd(int a, int b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
    ll mod=429;
   
    for(ll a=1;a<429;a++){
        if(gcd(a,429)==1){
            if(modpow(a,480,mod)==1){
                cout<<"Least value of a is: "<<a<<endl;
                break;
            }
        }
    }

}