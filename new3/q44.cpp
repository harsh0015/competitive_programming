#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,e,h,a,b,c;cin >>n>>e>>h>>a>>b>>c;

		int cost=INT_MAX;
		bool flag=false;


		for(int i=0;i<=n;i++){
			for(int j=0;j<=n-i;j++){
				int k=n-i-j;
               
               if(2*i+k<=e && 3*j+k<=h){
               	flag=true;
               	int sum=a*i+b*j+c*k;

               	if(sum <cost)cost=sum;
               }

			}
		}

		if(flag)cout <<cost<<endl;
		else cout <<-1<<endl;
	}
}