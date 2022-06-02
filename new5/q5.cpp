#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){
		int n;cin >>n;

		char arr[n+1][n+1];
		vector<pair<int,int>>v;

		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				{
					char c;cin >>c;

					if(c=='*'){
						pair<int,int >p;
						p.first=i;
						p.second=j;
						v.push_back(p);
					}
				}

		if(v[0].first!=v[1].first && v[0].second !=v[1].second){
			pair<int ,int>p1,p2;
            
          p1.first=v[0].first;
          p1.second=v[1].second;

          p2.first=v[1].first;
          p2.second=v[0].second;

            v.push_back(p1);
            v.push_back(p2);

		}
		else{

			if(v[0].first==v[1].first){
				if(v[0].first==0)
				{
					pair<int ,int>p1,p2;
					p1.first=1;
					p2.first=1;

					p1.second=v[0].second;
					p2.second=v[1].second;
					 v.push_back(p1);
            v.push_back(p2);
				}
				else{
                       pair<int ,int>p1,p2;
					p1.first=0;
					p2.first=0;

					p1.second=v[0].second;
					p2.second=v[1].second;
					 v.push_back(p1);
                   v.push_back(p2);
				}
			}//if

if(v[0].second==v[1].second){
				if(v[0].second==0)
				{
					pair<int ,int>p1,p2;
					p1.second=1;
					p2.second=1;

					p1.first=v[0].first;
					p2.first=v[1].first;
					 v.push_back(p1);
            v.push_back(p2);
				}
				else{
                       pair<int ,int>p1,p2;
					p1.second=0;
					p2.second=0;

					p1.first=v[0].first;
					p2.first=v[1].first;
					 v.push_back(p1);
                   v.push_back(p2);
				}
			}//if


		}//elsee;
  // for(auto i:v){
  // 	cout <<i.first<<" "<<i.second<<endl;

  // }

 for(int i=0;i<n;i++){
 	for(int j=0;j<n;j++){
 		if(arr[i][j]=='*')cout <<"*";
 		else
 		{
 			bool flag=false;
 			for(auto a:v){
  	if(i==a.first && j==a.second){
  		flag=true;
  		break;
  	}
  	
  }
  if(flag)cout <<"*";
  	else cout <<".";
 		}
 	}
 	cout <<endl;
 }


	}
}