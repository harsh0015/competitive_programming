#include<bits/stdc++.h>
using namespace std;

int common(string s1,string s2){

	int count=0;

	for(int i=0;i<s1.length();i++){
		if(s1[i]==s2[i])count++;
	}

	return s1.length()-count;
}

int main(){

	int n,m;

	cin >>n>>m;

	vector<string >v;

	for(int i=0;i<n;i++){
		string s;cin >>s;

		v.push_back(s);
	}
	int count=0;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
         int c=common(v[i],v[j]);

         if(c%2==1)count++;
		}
	}

	cout <<count;

}