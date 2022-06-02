#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,t;
	cin >>n>>t;
int arr[n+1];
	for(int i=1;i<n+1;i++)cin >>arr[i];

	int check[51];
for(int i=1;i<51;i++)check[i]=0;

	for(int i=1;i<n+1;i++){
		if(check[arr[i]]==0)check[arr[i]]=i;

	}

	for(int i=0;i<t;i++){
		int a;cin >>a;

		cout <<check[a]<<" ";

		for(int i=1;i<51;i++){
			if(check[i]!=0 && check[i]<check[a])check[i]++;

		}
		check[a]=1;
	}
}