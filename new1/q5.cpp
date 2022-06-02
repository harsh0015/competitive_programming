#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int n;
		cin >>n;

	  int arr[n];
	  for(int i=0;i<n;i++){
	  	cin >>arr[i];
	  }

	  unordered_map<int ,int >m;

	  for(int i=0;i<n;i++){

	  	if(m.find(arr[i])==m.end())
	  		m[arr[i]]=1;
	  	else
	  		m[arr[i]]++;
	  }

    bool flag=false;
	  for(auto i:m){
       if(i.second>1)
       {
       	flag=true;
       	break;
       }
	  }
	  if(flag)cout << "YES"<<endl;
	  else cout << "NO"<<endl;
	}
}