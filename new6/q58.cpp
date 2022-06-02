#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;

    while(t--){

    	string s;cin>>s;

    	int ans=0;

    	stack<char> st;
    	int counter=0;
    	int ch=0;
    	bool flag=false;
    	char bot;

    	for(int i=0;i<s.length();i++){
            if(s[i]=='?' && st.empty()){
            	st.push(s[i]);
            	counter++;
            	continue;
            }

            if( s[i]=='?' && !st.empty() ){
            	if(st.top()=='?'){
            		if(flag)ch++;
            		st.push(s[i]);
            		counter++;
            	}
            	else{
                     bot=st.top();
                     flag=true;
                     counter++;
                     ch++;
                     st.push(s[i]);
            	}
            	continue;
            }
            if(s[i]!='?'){
            	if(st.empty()){
            		st.push(s[i]);
            		counter++;
            		continue;
            	}
            	if(st.top()!=s[i]){
                  if(st.top()=='?'){
                  	if(flag){
                      if((s[i]==bot && ch%2==1)|| (s[i]!=bot && ch%2==0)){
                      	counter++;
                      	ch=0;
                      	flag=false;
                      	st.push(s[i]);
                      }
                      else{
                      	ans=ans+ (counter*(counter+1))/2-1;
                      	// st.clear();
                      	ch=0;
                      	flag=false;
                      	counter=2;
                      	st.push(s[i]);
                      }
                  	}
                  	else{
                  		counter++;
                  		st.push(s[i]);
                  	}
                  }
                  else{
                    st.push(s[i]);
                    counter++;
                  }
                  continue;
            	}
            	if(st.top()==s[i]){
            		ans=ans+ (counter*(counter+1))/2;
                      	// st.clear();
                      	ch=0;
                      	flag=false;
                      	counter=1;
                      	st.push(s[i]);
            	}
            }
    	}

    	// if(!st.empty())
    		ans=ans+ (counter*(counter+1))/2;


    	cout <<ans<<endl;
    }
	
}