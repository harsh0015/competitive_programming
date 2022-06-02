#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		vector<pair<int ,int>>v;

		for(int i=0;i<n;i++){

			pair<int ,int>p;
			cin >>p.first>>p.second;
			v.push_back(p);
		}

// 		int minx=v[0].first,miny=v[0].second,maxx=v[0].first,maxy=v[0].second;


// 		for(int i=0;i<n;i++){

// 			if(v[i].first>maxx)maxx=v[i].first;
// 			if(v[i].first<minx)minx=v[i].first;

// 			if(v[i].second>maxy)maxy=v[i].second;
// 			if(v[i].second<miny)miny=v[i].second;

// 		}
// int dis=100000;


//    int count=0;
// 		for(int i=minx;i<=maxx;i++){
// 			for(int j=miny;j<=maxy;j++){
              
//               int sum=0;

//               for(int k=0;k<n;k++){
//               	sum=sum+abs(v[k].first-i)+abs(v[k].second-j);
//               }

//               if(sum<dis){dis=sum;
//               	count=1;
//               	continue;
//               }
//               if(sum==dis){
//               	count++;
//               }
// 			}
// 		}

		// cout <<count<<endl;

		int medx=0;
		int medy=0;

		int sumx=0,sumy=0;

		for(int i=0;i<n;i++){
			sumx=sumx+v[i].first;
			sumy=sumy+v[i].second;
		}

		



	}
}