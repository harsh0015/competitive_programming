#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n ;cin >>n;

		int arr[n];

		for(int i=0;i<n;i++)
			cin >>arr[i];

		int a=0,b=0;

		for(int i=0;i<n;i++){
			if(arr[i]%2==0)a++;
			else b++;
		}

		if(b%2==0){
			cout <<1<<endl;
			continue;
		}

		else cout <<2<<endl;
	}
}