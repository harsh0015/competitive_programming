#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		int n,k;cin >>n>>k;
		bool flag=true;

		string s1,s2;

		cin >>s1>>s2;

		unordered_map<char,int>m1,m2;

		for(int i=0;i<n;i++)
		{
			if(m1.find(s1[i])==m1.end())
				m1[s1[i]]=1;

			else m1[s1[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(m2.find(s2[i])==m1.end())
				m2[s2[i]]=1;

			else m2[s2[i]]++;
		}

		
	}
}