#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;cin >>n;

	

	if(n<2){

		int a,b;cin >>a>>b;
		cout <<-1;}
	else {
  vector<pair<int ,int >>v;
bool flag=false;
  for(int i=0;i<n;i++){
      pair<int ,int >p;
      cin >>p.first>>p.second;
      v.push_back(p);
  }
  int l=0,b=0;

  for(int i=0;i<n;i++){
  	for(int j=i+1;j<n;j++){
  if(v[i].first!=v[j].first && v[i].second!=v[j].second){
  	flag=true;
  	l=abs(v[i].first-v[j].first);
  	b=abs(v[i].second-v[j].second);
  }
  	}
  }
  if(flag){
		cout <<l*b;
	}
	else cout <<-1;
	}

	
}