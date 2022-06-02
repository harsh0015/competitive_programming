#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		if(n>45){
			cout <<-1<<endl;
			continue;
		}

		if(n<10)
			cout <<n<<endl;

		if(n>=10){

			bool arr[10];

			for(int i=1;i<10;i++)
				arr[i]=false;

			int sum=n;
			for(int i=9;i>=1;i--){
				if(!arr[i] &&sum-i>=0){
					sum=sum-i;
					arr[i]=true;

				}
			}
        int ans=0;
          for(int i=1;i<10;i++){
            if(arr[i])
            	ans=ans*10+i;
          }
        cout<<ans<<endl;
		}
	}
}