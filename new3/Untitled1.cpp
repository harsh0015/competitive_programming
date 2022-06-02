#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
 
// Returns XOR of x and y
ll myXOR(ll x, ll y)
{
   return (x | y) & (~x | ~y);
}
 
// Driver program to test above function
int main()
{
   ll t;cin >>t;

   while(t--){

ll sum;
   	ll n,m,k;cin >>n>>m>>k;

   	 sum=2+k;
   	


   for(ll i=3;i<=m+1;i++){
ll count=min(i-1,n);
if(count %2==1)
sum=myXOR(sum,i+k);

   }

   for(ll i=m+2;i<=m+n;i++){
    ll count=m+n-i+1;
if(count %2==1)
sum=myXOR(sum,i+k);


   }

cout <<sum <<endl;

   }
   
  
}
