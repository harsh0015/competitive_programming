#include<bits/stdc++.h>
using namespace std;

int arr[100];
int counter=0;


int solve (string s,vector<int >v){
	counter++;

	vector<int >y;

	int zero=0;
	int one=0;

	for(int i=0;i<s.size();i++){
		if(s[i]=='1')one ++;
		else zero++;
	}

	if(zero==s.size() || one==s.size()){

		for(int i=0;i<s.size();i++){
			arr[v[i]]=counter;
			counter++;
		}

		return s.size();}


	string used ="";
	string left="";

	for(int i=0;i<s.size();i++){
		if(used.size()==0){
			arr[v[i]]=counter;
			used=used+s[i];
		}
		else {
			if(s[i]==used[used.size()-1]){left=left+s[i];y.push_back(v[i]);}
			else {used=used+s[i];arr[v[i]]=counter;}
		}

		
	}
	return 1+solve(left,y);
}

int main(){

	int t;cin >>t;

	while(t--){
		int n;cin >>n;

		string s;cin >>s;
		counter=0;
		vector<int >v;

		for(int i=0;i<n;i++)v.push_back(i);


		int zero=0;
	  int one=0;

	for(int i=0;i<s.size();i++){
		if(s[i]=='1')one ++;
		else zero++;
	}
     int count=1;
	if(zero==s.size() || one==s.size()){

		for(int i=0;i<s.size();i++){
			arr[v[i]]=count;
			count++;
		}

		cout <<s.size()<<endl;
    for(int i=0;i<n;i++)cout <<arr[i]<<" ";
    	cout <<endl;

    	continue;
		}

		int ans=solve(s,v);

		cout <<ans<<endl;

		for(int i=0;i<n;i++)cout <<arr[i]<<" ";

		cout <<endl;
	}
}

// 1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111