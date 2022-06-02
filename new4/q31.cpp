#include<bits/stdc++.h>
using namespace std;

bool solve(string s,int n,pair<int,int> p){
   int i;

   if(p.first>0 && p.second>0)return true;

   bool flag=false;
   bool f1=false;
   bool f2=false;

    for( i=n;i<s.size()-1;i++){
    	if(s[i]=='A' && s[i+1]=='B'){
    
    		p.first++;
    		flag=true;
    		f1=true;
    		break;
    	}

    	if(s[i]=='B'&&s[i+1]=='A'){
    		p.second++;
    		flag=true;
    		f2=true;
    		break;
    	}
    }
    if(!flag)return false;

     if(f1){
     	pair<int ,int >p2;
     	p2.first=p.first-1;
     	p2.second=p.second;
     	if(s[i+2]=='A')
     	  return solve(s,i+1,p2)|| solve(s,i+2,p);
     	else return solve(s,i+2,p);
     }

     if(f2){
     	pair<int ,int >p2;
     	p2.first=p.first;
     	p2.second=p.second-1;

     	if(s[i+2]=='B')
     	   return solve(s,i+1,p2)|| solve(s,i+2,p);
     	else return solve(s,i+2,p);
     }


}

int main(){

	string s;cin >>s;
	pair<int ,int>p;
	p.first=0;
	p.second=0;

	bool flag1=false,flag2=false;
	int count1=0,count2=0;

	for(int i=0;i<s.size()-1;i++){
		if(s[i]=='A'&& s[i+1]=='B'){flag1=true;count1++;}

		if(s[i]=='B' && s[i+1]=='A'){flag2=true;count2++;}
	}

	if(flag1 && flag2){

		if(count1>2 && count2>2){
			cout <<"YES";
			return 0;
		}

	bool ans=solve(s,0,p);

	if(ans)cout<<"YES"<<endl;

	else cout <<"NO";
	}
	else cout <<"NO";

}