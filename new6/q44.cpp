#include<bits/stdc++.h>
using namespace std;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,q;cin>>n>>m>>q;

    int arr[n+1][m+1];

    for(int i=1;i<n+1;i++)
    	for(int j=1;j<m+1;j++)
    		cin>>arr[i][j];

  
  set<pair<int ,int>> st;

  for(int i=1;i<n+1;i++){
      int count=0;
      int ma=0;
      for(int j=1;j<=m;j++){
      	if(arr[i][j]==1)count++;
      	else {
      		ma=max(count,ma);
      		count=0;
      	}
      }
      	ma=max(count,ma);
      st.insert({ma,i});
  }


  for(int i=0;i<q;i++){
  	int a,b;cin>>a>>b;

  	 if(arr[a][b]==1)arr[a][b]=0;
  	 else arr[a][b]=1;
    
    int count=0;
      int ma=0;
      for(int j=1;j<=m;j++){
      	if(arr[a][j]==1)count++;
      	else {
      		ma=max(count,ma);
      		count=0;
      	}
      }
      	ma=max(count,ma);

      for ( auto itr = st.begin(); itr != st.end(); itr++)
    {
        if((*itr).second==a){
        	pair<int ,int>p=*itr;
        	st.erase(itr);

        	p.first=ma;

        	st.insert(p);
        	break;
        }
    }
    auto itr1=st.end();
     itr1--;
     cout <<(*itr1).first<<endl;


  }

	
}