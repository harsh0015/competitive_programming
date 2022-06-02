#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,r;cin >>n>>r;

	vector<int >v;

	for(int i=0;i<n;i++){
		int t;cin >>t;
		if(t!=r)v.push_back(t);
	}

	

	for(int i=0;i<v.size();i++)
		cout <<v[i]<<" ";
}