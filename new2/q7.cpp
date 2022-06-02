#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;cin >>t;

	while(t--){

		int n;cin >>n;

		int r,s,p;

		cin >>r>>p>>s;

		string s1;cin >>s1;

		int win=0;

		char arr[n+1];

		for(int i=0;i<n;i++){
			arr[i]='o';
		}

		for(int i=0;i<s1.length();i++){
			if(s1[i]=='R' && p!=0){
				win++;
				p--;
				arr[i]='P';

			}
			if(s1[i]=='S' && r!=0){
				win++;
				r--;
				arr[i]='R';
			}
			if(s1[i]=='P' && s!=0){
				win++;
				s--;
				arr[i]='S';
			}
		}
        
        for(int i=0;i<n;i++){
        	if(arr[i]=='o'){
        		if(s!=0){
        			arr[i]='S';
        			s--;
        			continue;
        		}
        		if(r!=0){
        			arr[i]='R';
        			r--;
        			continue;
        		}
        		if(p!=0){
        			arr[i]='P';
        			p--;
        			continue;
        		}
        	}
        }

  // cout <<win<<"$"<<endl;
		if(n%2==0){
			if(win>=n/2){
				cout <<"YES"<<endl;
				for(int i=0;i<n;i++)
					cout <<arr[i];

				cout <<endl;
			}
			else cout <<"NO"<<endl;
		}
		else{
			if(win>=n/2+1){
				cout <<"YES"<<endl;
				for(int i=0;i<n;i++)
					cout <<arr[i];

				cout <<endl;
			}
			else cout <<"NO"<<endl;
		}
	}
}