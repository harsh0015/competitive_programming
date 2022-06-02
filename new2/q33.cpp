#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){
		string s;cin >>s;

		int arr[s.length()];

		for(int i=0;i<s.length();i++){
			arr[i]=s[i]-'a';
		}

		cout <<arr[0];
	}
}