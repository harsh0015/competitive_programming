#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){

	int t;cin >>t;

	while(t--){

		ll n,k;cin>>n>>k;

		

		ll ma=0;

		unordered_set<int> s;
        
        ll mi;


		for(ll i=0;i<n;i++){


			ll t;cin >>t;

			// if(t!=i){
			// 	if(t<mi)mi=t;
			// }

			if(t>ma)ma=t;

			s.insert(t);
			}

			for(ll i=0;i<INT_MAX;i++){
						if(s.find(i)==s.end()){
							mi=i;
							break;
						}
						
					}


			while(k--){

				// cout <<"*"<<ma<<"*"<<mi<<endl;

				ll x=ceil(float(ma+mi)/float(2));
                    s.insert(x);
				if(x>ma)ma=x;

				if(x==mi){
					for(ll i=0;i<INT_MAX;i++){
						if(s.find(i)==s.end()){
							mi=i;

							// cout <<"("<<i<<")"<<endl;
							break;
						}
						
					}
				}

				// cout <<"*"<<x<<"*"<<endl;

				

			}

   cout <<s.size()<<endl;
		


	}
	
	}
