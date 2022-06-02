// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// ll check(ll c){

// 	ll count=0;

// 	while(c!=0){
// 		count++;
// 		c=c/10;
// 	}
// 	return count;
// }

// int main()
// {
// 	ll t;cin >>t;

// 	while(t--){

// 		ll a,b,c;cin >>a>>b>>c;

// 		ll x,y;

// 		x=(ll)pow(10,a-1);
// 		y=(ll)pow(10,c-1);
// 		cout <<x<<" "<<y<<endl;

// 		for(ll i=0;i<10;i++){
// 			if(check(pow(11,i))==b-c+1){
// 				cout <<(ll)pow(11,i)<<endl;
// 				y=(ll)y*(ll)pow(11,i);
// 				break;
// 			}
// 		}
//  cout <<x<<" "<<y<<endl;
// 	}
// }
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        ll hcf;
        if(c==1)
        {
            hcf=1;
        }
        else
        {
            hcf=5;
        }
        for(int i=1;i<=c-2;i++)
        {
            hcf=(hcf*10)+5;
        }
        hcf=hcf*2;
        ll x=hcf;
        ll y=hcf;
        for(int i=1;i<=a-c;i++)
        {
            x=x*10;
        }
        ll scaler=1;
        for(int i=1;i<=b-c;i++)
        {
            scaler=scaler*10;
        }
        
        scaler++;
        
        y=y*scaler;
        cout<<x<<" "<<y<<endl;
    }
}