#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int >v;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		v.push_back(a);
	}
  sort(v.begin(), v.end());
 vector <int> a;
 vector<int >b;
  if(n%2!=0){
    for(int i=0;i<n;i++){
    	if(i<n/2)
    		a.push_back(v[i]);
    	else
    		b.push_back(v[i]);
    }
  }
  else{
  	 for(int i=0;i<n;i++){
    	if(i<n/2-1)
    		a.push_back(v[i]);
    	else
    		b.push_back(v[i]);
    }
  }
  int y=a.size();
  cout << a.size()<<endl;
  for(int i=0;i<n;i++){
  	
  	if(i<2*y){

  		if(i%2==0){
             
  			cout <<b[b.size()-1]<<" ";
  			b.pop_back();
  		          }
  		else{
  			
  			
  			cout <<a[a.size()-1]<<" ";
  			a.pop_back();
  		    }
  		             }
  		else{
  			
  			if(b.size()>0){
  				cout <<b[b.size()-1]<<" ";
  			   b.pop_back();
  		                  }
  			
  		    }

  	   }
  }
