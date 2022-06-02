#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){


		int n;
		cin >>n;
		vector<int > v;


		for(int i=1;i<n+1;i++)
			{
				int a; 
				cin >>a;
				v.push_back(a);
			}
         
         vector<int> v2;


for(int i=0;i<v.size();i++){
	v2.push_back(v[i]);
}

       sort(v.begin(), v.end());

       vector<int > v1;

       for(int i=0;i<v.size();i++){
       	if(v[i]!=v[i-1] && v[i]!=v[i+1])
       		v1.push_back(v[i]);
       }
      
      if(v1.size()==0){
      	cout<<-1<<endl;
      }
      else{
      sort(v1.begin(), v1.end());

      int ans=v1[0];

      for(int i=0;i<v2.size();i++)
      	if(v2[i]==ans)
      		cout << i+1<<endl;

      }
	}
}