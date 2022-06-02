#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

 ll fact(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return n * fact(n - 1); 
} 

// ll com(ll a,ll b){
// cout <<a<<"%"<<b<<endl;

// ll an=1;

// if(b>a-b)
// {
// for(ll i=b+1;i<=a;i++)
//   an=an*i;

// cout <<an/fact(a-b)<<"%"<<endl;

// return an/fact(a-b);
// }
// else{
// 	for(ll i=a-b+1;i<=a;i++)
//       an=an*i;

// cout <<an<<"%"<<fact(b)<<"*"<<endl;
// return an/fact(b);}

// }
int nCrModpDP(int n, int r, int p)
{
    int C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1; 
    for (int i = 1; i <= n; i++)
    {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}


int main(){

	ll t;cin >>t;

	while(t--){

		ll n,k;cin >>n>>k;

		ll arr[n];

		for(ll i=0;i<n;i++)
			cin >>arr[i];

		map<ll,ll> m;

		for(ll i=0;i<n;i++){
			if(m.find(arr[i])==m.end())
				m[arr[i]]=1;
			else m[arr[i]]++;
		}

    
      ll ans=1;
     map<ll,ll>::reverse_iterator it; 

for (it = m.rbegin(); it != m.rend(); it++) { 
    
	      if(it->second >= k)
	      {
	      	ans=nCrModpDP(it->second,k,1000000007);
	      	k=0;
	      	break;
	      }
	      else {
	      	k= k- (it->second);
	      }
        
    } 
    
     cout <<ans<<endl;

	}
}