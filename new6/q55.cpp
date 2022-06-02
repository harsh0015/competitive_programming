#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){


   


    int t;cin>>t;

    while(t--){
    	
    	int n;cin>>n;

    	vector<int>odd,even;

    	

    	for(int i=0;i<n;i++){
    		int x;cin>>x;

    		if(x%2==0)even.push_back(x);
    		else odd.push_back(x);
    	}
    	
    	int ans=0;
    	ans=ans+ even.size()*odd.size();
        int a=even.size();
    	ans=ans+ (a*(a-1))/2;

   
        
        if(odd.size()<2){
        	cout <<ans<<endl;
        	continue;
        }

        else{
        	int count=0;

        	for(int i=0;i<odd.size();i++){
        		for(int j=i+1;j<odd.size();j++){
                    if(gcd(odd[i],odd[j])>1)count++;
        		}
        	}

        	ans=ans+count;
        	cout <<ans<<endl;
        }

    }
	
}