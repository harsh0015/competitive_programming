#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,k;cin >>n>>k;

		string s;cin >>s;

		vector<int>v;

		for(int i=0;i<n;i++){
			if(s[i]=='*')v.push_back(i);
		}

		if(v.size()==1){
			cout <<1<<endl;
			continue;
		}
		if(v[v.size()-1]-v[0]<=k){
			cout <<2<<endl;
			continue;
		}

		int count=1;

		int last=v[v.size()-1];


		for(int i=0;i<v.size();i++){
			int check=v[i]+k;

			if(check>=last)break;

			std::vector<int>::iterator low;
        low=std::lower_bound (v.begin(), v.end(), check); //  

        int a= (low- v.begin()); 

        if(v[a]!=check)a--;

        // cout <<v[a]<<"#"<<endl;

        // if(v[a]==check) 
      
        count++;
        i=a-1;
		}

		cout <<count+1<<endl;
	}
}