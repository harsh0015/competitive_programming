#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;cin>>t;
	while(t--){

		int n,m,h;cin>>n>>m>>h;

        int arr[n];

        for(int i=0;i<n;i++)cin>>arr[i];

      set<pair<int,int>>st,st1;

      for(int i=0;i<n;i++){
      	st.insert({arr[i],i});
      }

      int x=n-m;
      while(x--){
      	pair<int,int>p=*(st.begin());
      	st.erase(st.begin());
      	st1.insert(p);
      }

      set<pair<int,int>> ::reverse_iterator rit;

      int ans[n];
      int a=1;

      for(auto i:st){
      	ans[i.second]=a++;
      }

      for(rit=st1.rbegin();rit!=st1.rend();rit++){
      	pair<int,int>p=*(st.begin());
      	st.erase(st.begin());

      	ans[(*rit).second]=ans[p.second];

      	st.insert({p.first +(*rit).first,p.second});
      }

      auto it=st.end();
      it--;
      if(it->first - (*st.begin()).first>h){
      	cout <<"NO"<<endl;
      	continue;
      }

      else{
      	cout <<"YES"<<endl;

      	for(int i=0;i<n;i++)
      		cout <<ans[i]<<" ";
      	cout <<endl;
      }
	}
}