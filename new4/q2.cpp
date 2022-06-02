#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		string s;cin >>s;

		stack<char> st;

		for(int i=0;i<s.length();i++){
			if(st.empty()){
				st.push(s[i]);
				continue;
			}

			if(s[i]=='B' && (st.top()=='A' || st.top()=='B'))st.pop();
			else st.push(s[i]);
		}

		int count=0;

		while(!st.empty()){
			count++;
			st.pop();
		}

		cout <<count<<endl;
	}
}