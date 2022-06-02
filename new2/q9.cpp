#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;

	while(t--){

		string s;
		cin >>s;
          bool flag=true;
		unordered_map<char ,int > m;

		if(s.length()%2==0){
			for(int i=0;i<s.length();i++){
				if(i<s.length()/2){
					if(m.find(s[i])==m.end())
						m[s[i]]=1;
					else m[s[i]]++;
				}
				else{
					if(m.find(s[i])==m.end())
						{
							flag=false;
							break;
						}
					else {m[s[i]]--;
						if(m[s[i]]<0){
							flag=false ;
							break;
						}
					}
				}
			}
			if(flag) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;
		}

		else{

			for(int i=0;i<s.length();i++){
                  if(i==(s.length()-1)/2)
                  	continue;

				if(i<s.length()/2){
					if(m.find(s[i])==m.end())
						m[s[i]]=1;
					else m[s[i]]++;
				}
				else{
					if(m.find(s[i])==m.end())
						{
							flag=false;
							break;
						}
					else {m[s[i]]--;
						if(m[s[i]]<0){
							flag=false ;
							break;
						}
					}
				}
			}
			if(flag) cout <<"YES"<<endl;
		else cout <<"NO"<<endl;

		}
	}
}