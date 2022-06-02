#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;cin >>t;
    
	while(t--){
		int count=0;
		string s;cin >>s;
         unordered_map <char,int>m;
         char arr[s.length()+2];

         for(int i=0;i<s.length();i++)
         	arr[i]=s[i];

         for(int i=0;i<s.length();i++){
         	if(m.find(arr[i])==m.end())
         		m[arr[i]]=i;

         	else{
         		if(i-m[arr[i]]>2){
         			
         			m[arr[i]]=i;
         			continue;
         		}
         		else{
         			for(int j=97;j<123;j++){
         				int l;
         				if(i>=2)l=i-2;else l=i-1;
                         
                         int r;
                         if(i==s.length()-1)r=i;
                          else if(i==s.length()-2)r=i+1;
                          else r=i+2;

                          bool flag=true;

                          for(int k=l;k<=r;k++){
                          	if(j==int(arr[k]))
                          		flag=false;
                          }
                          if(flag) {arr[i]=char(j);
                          	count ++;
                          	break;

                          }
                          else continue;


         			}
         			
         		}
         	}
         }
         cout <<count<<endl;

	}
}