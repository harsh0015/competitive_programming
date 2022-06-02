#include<bits/stdc++.h>
using namespace std;


int main(){

	int n,k;cin >>n>>k;

	string s;cin>>s;

	map<int,int>m;

	for(int i=0;i<n;i++)m[s[i]]++;

	vector<int>v;

for(auto i:m)v.push_back(i.second);

	sort(v.begin(),v.end());

   


}