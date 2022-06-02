#include<bits/stdc++.h>
using namespace std;

bool check(int c1,int c2,int c3){
	if((abs(c1-c2)+c3)%2==0)return true;
	else return false;
}

int main(){
	int t;cin>>t;

	while(t--){
		int n,k;
		cin >>n>>k;

		string s;cin >>s;

		int c1=0;
		int c2=0;
		int c3=0;
        bool flag=true;
		int i,j;
		i=0;
		j=k-1;
		for(int r=0;r<k;r++){
			if(s[i]=='1')c1++;
			else if(s[i]=='0')c2++;
			else c3++;
		}
		flag=check(c1,c2,c3);
		i++;
		j++;
		while(i<s.size()-k+1 && flag){
            if(s[i-1]=='1')c1--;
			else if(s[i-1]=='0')c2--;
			else if(s[i-1]=='?')c3--;
 
          if(s[j]=='1')c1++;
			else if(s[j]=='0')c2++;
			else if(s[j]=='?') c3++;
          
          flag=check(c1,c2,c3);
          i++;j++;
		}
       
       if(flag) cout <<"YES"<<endl;
       else cout <<"NO"<<endl;
	}
}