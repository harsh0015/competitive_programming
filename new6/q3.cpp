#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n,a,b;cin>>n>>a>>b;

		vector<int>l,r;
		int left[200000],right[200000];
		for(int i=0;i<200000;i++){
			left[i]=0;
			right[i]=0;
		}

		for(int i=0;i<n;i++){
			int x;cin>>x;

			if(i<a){l.push_back(x);left[x]++;}
			else {r.push_back(x);right[x]++;}
		}

		int count=0;
      for(int i=0;i<l.size();i++){
      	if(right[l[i]]>0){
      		int m=min(left[l[i]],right[l[i]]);
      		left[l[i]]-=m;
      		right[l[i]]-=m;
      		count++;
      	}
      }
      cout <<"count:"<<count<<endl;

      int ans=0;

      vector<int>x,y;

      for(int i=0;i<200000;i++){
      	if(left[i]>0)x.push_back(left[i]);
      	if(right[i]>0)y.push_back(right[i]);
      }

      sort(x.begin(), x.end());
      sort(y.begin(), y.end());

      int ans=0;

      int i=0,j=0;

      while(i<x.size() || j<y.size()){

         if(i==x.size())
      }

      // for(int i=0;i<200000;i++){
      // 	if(left[i]>1){
      // 		ans=ans+left[i]/2;
      // 		left[i]=left[i]%2;
      // 	}
      // 	if(right[i]>1){
      // 		ans=ans+right[i]/2;
      // 		right[i]=right[i]%2;
      // 	}
      // }
     
     // int lc=0,rc=0;

     // for(int i=0;i<200000;i++){
     // 	lc=lc+left[i];
     // 	rc=rc+right[i];
     // }
     // cout <<lc<<" "<<rc<<endl;
     // ans=ans+ min(lc,rc)+abs(lc-rc);

     // cout <<ans<<endl;

	}
}