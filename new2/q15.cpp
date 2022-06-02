#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;cin >>n;
	vector<string> v;
    

	for(int i=0;i<n;i++){
		string s;
		cin >>s;
		v.push_back(s);
	}

	for(int i=0;i<n;i++)
	{
		int count =0;
         string check=v[i];
       for(int j=0;j<n;j++)
       {
       	if(v[j]==check)
       		count++;
       	break;
       }

       if(check[0]!='!'){
       	for(int j=0;j<n;j++)
       	{
       		if('!'+check==v[j])
       		{
       			count++;
       			break;
       		}
       	}
       }
       else {
       	for(int j=0;j<n;j++){
       		if(check.substr(1,check.length()-1)==v[j]){
       			count++;
       			break;
       		}
       	}
       }

       if(count==2)
       {
       	cout <<check;
       return 0;
       }
	}

	cout <<"satisfiable";
}
