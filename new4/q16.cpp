#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
// 	vector<int>v;

// 	for(int i=1;i*i<=n;i++){
//      if(n%i==0){
//      	v.push_back(i);

//      	if(n/i!=i)v.push_back(n/i);
//      }
// 	}

// 	return v.size();
// }

int main(){

	int t;cin >>t;


	while(t--){
		
bool flag=false;
for(int i=1;i*i<=1000000;i++){
	{
		cout <<i*i<<endl;
		 fflush(stdout);

		int a;cin >>a;
		fflush(stdin);


		if(a==0)
			continue;
		if(a==-1){
			flag=false;
			break;
		}
		if(a==1){
			flag=true;
			break;
		}
	}
	}
	if(flag)continue;
	else break;
}
}