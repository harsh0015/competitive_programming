#include<bits/stdc++.h>
using namespace std;

vector<int> fac(int n,int m){

	vector<int >v;

	for(int i=1;i*i<m;i++){
		if(m%i==0){
			if(i<=n)v.push_back(i);

			if(m/i!=i){
				if(m/i<=n)v.push_back(m/i);
			}
		}
	}

	return v;
}

int main(){

	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;
		vector<int> v=fac(n,m);

     int x=v.size();

     int count=n-1;

     if(x>2){
     	count=count+((x-1)*(x-2))/2;
     }

  cout<<count<<endl;
	}
}