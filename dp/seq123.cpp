#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){


		string s;
		cin >>s;

		int a=-1,b=-1,c=-1;
		bool flag1=false,flag2=false,flag3=false;
        int len=1000000;
		for(int i=0;i<s.length();i++){
              
             



			if(s[i]=='1')
			{
				flag1=true;
				a=i;
			}
			if(s[i]=='2')
			{
				flag2=true;
				b=i;
			}
			if(s[i]=='3')
			{
				flag3=true;
				c=i;
			}
			 if(flag1 && flag2 && flag3){
              	int l=max(a,max(b,c))- min(a,min(b,c)) +1;
              	if(l<len)
              		len=l;
              }
		}
       
       if (len!=1000000)
       cout <<len <<endl;
   else{
   	cout <<0<<endl;
   }
	}
}