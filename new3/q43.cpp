#include<bits/stdc++.h>
using namespace std;

vector<int > fact(int n){

	vector<int>v;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			v.push_back(i);

			if(n/i!=i)v.push_back(n/i);
		}
		
	}

	return v;
}

int main(){

	int t;cin >>t;

	while(t--){

		int n,x,y;cin >>n>>x>>y;

      vector<int>v=fact(y-x);

      sort(v.begin(), v.end());

      vector<int >ans;

      int d;

      for(int i=0;i<v.size();i++){
      	if((y-x)/v[i] -1 <=n-2){
      		d=v[i];
      		break;
      	}
      }

      for(int i=x;i<=y;i=i+d){
      	ans.push_back(i);
      }

      if(ans.size()<n){
      	int h=x-d;

      	while(h>0){
      		if(ans.size()==n)
      			break;

      		ans.push_back(h);
      		h=h-d;
      	}
      }

      if(ans.size()<n){
      	int h=y+d;

      	while(1){
      		if(ans.size()==n)break;

      		ans.push_back(h);
      		h=h+d;
      	}
      }

      sort(ans.begin(), ans.end());

      for(int i=0;i<n;i++)cout <<ans[i]<<" ";

      	cout <<endl;

	}
}