#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const long long MAX_SIZE = 1000001;
vector<long long >isprime(MAX_SIZE , true);
vector<long long >prime;
vector<long long >SPF(MAX_SIZE);


vector<ll>  SieveOfEratosthenes(ll n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    vector<ll>v;
 
    for (ll p = 2; p * p <= n; p++)
    {
        
        if (prime[p] == true)
        {
           
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
   
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);

       return v;
}
 

 vector<int> manipulated_seive(int N)
 vector<ll>v;
{
    // 0 and 1 are not prime
    isprime[0] = isprime[1] = false ;
  
    // Fill rest of the entries
    for (long long int i=2; i<N ; i++)
    {
        // If isPrime[i] == True then i is
        // prime number
        if (isprime[i])
        {
            // put i into prime[] vector
            prime.push_back(i);
  
            // A prime number is its own smallest
            // prime factor
            SPF[i] = i;
        }
  
        // Remove all multiples of  i*prime[j] which are
        // not prime by making isPrime[i*prime[j]] = false
        // and put smallest prime factor of i*Prime[j] as prime[j]
        // [ for exp :let  i = 5 , j = 0 , prime[j] = 2 [ i*prime[j] = 10 ]
        // so smallest prime factor of '10' is '2' that is prime[j] ]
        // this loop run only one time for number which are not prime
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
  
            // put smallest prime factor of i*prime[j]
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
      
	ll t;cin>>t;
	vector<ll>v = SieveOfEratosthenes(10000000);


	while(t--){

		ll n;cin>>n;
		if(n==2){
			cout <<1<<endl;
			continue;
		}

       ll count=0;

		ll i;
		for( i=0;i<v.size();i++){
			if(v[i]>n)break;

			else{
				if(2*v[i]>n)count++;
			}
		}

		if(n>1000000){

		}

  cout <<count<<endl;
	}
}