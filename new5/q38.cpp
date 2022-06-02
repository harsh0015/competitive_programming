#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;cin >>n;

	int sum=0;

	for(int i=0;i<n;i++){
		int x;cin >>x;
		sum=sum+x;
	}

	int count=0;

	for(int i=1;i<=5;i++){
		if((sum-1+i)%(n+1)!=0)count++;
	}
	cout <<count;
}