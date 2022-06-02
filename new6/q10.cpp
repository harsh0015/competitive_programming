#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){
		int D,d,A,B,C;
		cin >>D>>d>>A>>B>>C;

		int r=d*D;

      int res=0;

      if(r>=10)res=max(res,A);

      if(r>=21)res=max(res,B);

      if(r>=42)res=max(res,C);

      cout <<res<<endl;
		

	}
}