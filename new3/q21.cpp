#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;

		vector<pair<int ,int>>v1,v2;

		for(int i=0;i<n;i++){

			pair<int ,int>p;

			cin >>p.first>>p.second;

			v1.push_back(p);
		}


		for(int i=0;i<m;i++){

			pair<int ,int>p;

			cin >>p.first>>p.second;

			v2.push_back(p);
		}


		int count=0;

		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++){

				pair<int ,int > p1=v1[i];
				pair<int ,int > p2=v2[j];

				if(p1.second<=p2.first ||p2.second<=p1.first )continue;

				else {
					int m1=max(p1.first,p2.first);
					int m2=min(p2.second,p1.second);
					count=count+m2-m1;
				}
			}

			cout <<count <<endl;
	}
}