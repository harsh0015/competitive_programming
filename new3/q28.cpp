#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,q;cin >>n>>q;
	int arr[n];

	int one=0;
	int zero=0;

	for(int i=0;i<n;i++){
		int x;cin >>x;
		arr[i]=x;

		if(x==1)one++;
		else zero++;
	}

	while(q--){

		int a,b;cin >>a>>b;

		if(a==1){

			if(arr[b-1]==1){
				one--;
				zero++;
			}
			else {
				one++;zero--;
			}


			arr[b-1]=1-arr[b-1];
		}

		if(a==2){
			if(b<=one )cout <<1<<endl;
			else cout<<0<<endl;
		}
	}
}