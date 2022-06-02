#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll M;

 ll mod(ll x){
            return ((x%M + M)%M);
        }
ll add(ll a, ll b){
            return mod(mod(a)+mod(b));
        }
  ll mul(ll a,ll b){
            return mod(mod(a)*mod(b));
        }
    
ll modPow(ll a, ll b){
            if(b==0)
                return 1ll;
            if(b==1)
                return a%M;
            ll res=1;
            while(b){
                if(b%2==1)
                    res=mul(res,a);
                a=mul(a,a);
                b=b/2;
            }
            return res;
        }

        const ll N=2e5+2;
        ll fact[N];

        void precalc(){
            fact[0]=1;
            for(int i=1;i<N;i++){
                fact[i]=mul(fact[i-1],i);
            }
        }

int gcd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;

    if(a>b)return gcd(a-b,b);
    else return gcd(a,b-a);
}

set<int> primes(int n)
{
    set<int>st;
    while (n % 2 == 0)
    {
        st.insert(2);
        n = n/2;
    }
    
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            st.insert(i);
            n = n/i;
        }
    }
    if (n > 2)
        st.insert(n);

    return st;
}

int main(){
    cout <<"Enter the values of n,a,m :";
    int n,a,m;cin>>n>>a>>m;
    int phi=(m-1); //because m is prime
    int d=gcd(n,phi);
    M=m;
    if(modPow(a,d)==1){
        cout <<"The congruence is solvable"<<endl;
    }
    else {
        cout <<"The congruence is not solvable"<<endl;
    }
       set<int>st=primes(phi);

   int smallest=-1; 
  

   for(int i=2;i<=phi;i++){
    bool flag=true;
      for(auto s:st){
          if(modPow(i,phi/s)==1)flag=false;
      }
      if(flag){
        smallest=i;
        break;
      }
   }
   cout <<"The smallest primitive root is :"<<smallest<<endl;
   
   int h=-1;
   for(int i=0;i<=phi;i++){
    if(modPow(smallest,i)==a){
        h=i;
        break;
    }
   }

   cout <<"The value of h comes out to be : "<<h<<endl;
   vector<int>vx;
   for(int i=0;i<=phi;i++){
       if((n*i)%phi==h)vx.push_back(i);
   }
    
    cout <<"The solutions of the congruence relation are: ";
    for(auto i: vx){
        cout <<modPow(smallest,i)<<" ";
    }
    
}
