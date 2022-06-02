#include<bits/stdc++.h>
using namespace std;



int check (vector<char> v,string s){
  
  if(v.size()==1)
  	return 0;

  char a ,b;
  int mm=0;

  for(int i=0;i<v.size();i++){
  	for(int j=i+1;j<v.size();j++){
  	 a=v[i];
  	 b=v[j];

  	 bool f1=false;
  	 bool f2 =false;
     int count =0;
  	 for(int i=0;i<s.length();i++)
  	 {
  	 	if(s[i]==a && !f1)
  	 	{
  	 		if(f2){
  	 			count++;
  	 			f2=false;
  	 			f1=true;
  	 		}
  	 		else{
  	 			f1=true;
  	 		}
  	 	}


  	 	if(s[i]==b && !f2)
  	 	{
  	 		if(f1){
  	 			count=count+1;
  	 			f1=false;
  	 			f2=true;
  	 		}
  	 		else{
  	 			f2=true;
  	 		}
  	 	}


  	 	
  	 }
  	 if(count >mm)
  	 	mm=count;

  	}
  }
  return mm;

}


int main(){

	int t;cin >>t;

	while(t--){

		string s;cin >>s;

		unordered_map<char,int> m;

		for(int i=0;i<s.length();i++){
			if(m.find(s[i])==m.end())
				m[s[i]]=1;
			else m[s[i]]++;
		}

		int maxi=0;

		for(auto i:m){
			if(i.second>maxi)
				maxi=i.second;
		}


		vector<char >v;
          for(auto i:m){
          	if(i.second>=maxi/2)
          		v.push_back(i.first);
          }

  int mm=check(v,s);
  if(mm%2==1)mm++;
  else mm;
  
  // cout <<"%"<<maxi<<"&"<<mm<<endl;

  cout <<s.length()- max(mm,maxi)<<endl;


	}
}