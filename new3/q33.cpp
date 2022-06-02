#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;
   
	while(t--){

		bool flag=false;

		int n,u,r,d,l;cin >>n>>u>>r>>d>>l;

		for(int y=0;y<16;y++){

			int i,j,k,t;
            int h=y;
			t=h%2;
			h=h/2;
			k=h%2;
			h=h/2;

			j=h%2;
			h=h/2;
			i=h%2;
			h=h/2;

			bool flag1=true;

			if(i+j<=u && i+j+n-2>=u){}
			else flag1=false;

		    if(k+j<=r && k+j+n-2>=r){}
			else flag1=false;


		    if(k+t<=d && k+t+n-2>=d){}
			else flag1=false;


			if(i+t<=l && i+t+n-2>=l){}
			else flag1=false;


		   if(flag1)flag=true;


		   if(flag)break;






           
		}

		if(flag)cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
	}
}