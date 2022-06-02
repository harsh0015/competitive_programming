#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int arr[n+1];

		for(int i=1;i<n+1;i++)cin >>arr[i];

		vector<pair<int ,int >>v;

	for(int i=1;i<=n;i++){
		pair<int ,int >p;

		if(arr[i]==0)continue;

		p.second=i;
		p.first=max(1,i-arr[i]+1);
		v.push_back(p);
	}

	sort(v.begin(), v.end());

	for(int i=0;i<v.size();i++)cout << v[i].first<<" "<<v[i].second<<endl;

vector<int >y;
y.push_back(v[0].first);

	for(int i=1;i<v.size();i++){
      if(v[i-1].second<v[i].first){
      	y.push_back(v[i-1].second);
      	y.push_back(v[i].first);
      	y.push_back(v[i].second);
      }

      else {
      	if(v[i-1].second>=v[i].second){
      		

      		continue;}

      	y.push_back(max(v[i-1].second,v[i].second));
      }
	}


for(int i=0;i<y.size();i++)cout <<y[i]<<endl;


	for(int i=1;i<y[0];i++)
		cout <<0<<" ";

	for(int i=0;i<y.size()-1;i++){
		if(i%2==0){
		for(int j=y[i];j<=y[i+1];j++){
			cout<<1<<" ";
		}}
		else{
			for(int j=y[i]+1;j<y[i+1];j++){
			cout<<0<<" ";
		}
		}

	}

	cout <<endl;

	}
}