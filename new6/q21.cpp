#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin>>t;

	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		stack<char> st;

		for(int i=0;i<s.length();i++){
			if(s[i]=='(')st.push(s[i]);
			else{
				if(st.empty() || st.top()==')')st.push(s[i]);

				else{
					st.pop();
				}
			}
		}

		int count=0;

		while(!st.empty()){
			count++;
			st.pop();
		}

		cout <<count/2<<endl;
	}
}