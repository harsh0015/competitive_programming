#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n,m;cin >>n>>m;

		int count=0;

		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){

				
				if(((m%i)%j)==((m%j)%i)){
					
					count++;
				}
			}
		}

		

		cout <<count<<endl;
	}
}

// 5
// 4 10
// 4 12
// 3 19
// 5 18
// 67 10109
