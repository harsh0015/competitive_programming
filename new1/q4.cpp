#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >>t;

	while(t--){

		int n;
		cin >>n;

		vector<int> arr;
		vector<int> sorted;

		arr.push_back(0);
		sorted.push_back(0);

		for(int i=0;i<n;i++){

			int a;
			cin >>a;
			arr.push_back(a);
			sorted.push_back(a);
		}

		sort(sorted.begin(),sorted.end());
        bool flag=true;
        int small=sorted[1];
		for(int i=1;i<n+1;i++){
          if(arr[i]%small!=0)
          {
          	if(arr[i]!=sorted[i]){
          		flag=false;
          		break;
          	}
          }
		}

		if(flag){
			cout <<"YES"<<endl;

		}
      else cout <<"NO"<<endl;
	}
}