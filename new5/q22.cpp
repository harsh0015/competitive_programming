# include <bits/stdc++.h>
 
using namespace std;
 
 
int main() {
	int T;
	cin>>T;
	
	while(T--)
    {
        long long int A,B;
        cin>>A>>B;
        
        if(B==1)
        cout<<"NO\n";
        else
        {
        cout<<"YES\n";
        cout<<A<<" "<<A*B<<" "<<A*(B+1)<<endl;
        }
    
    }
	
	return 0;
}
