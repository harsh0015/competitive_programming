#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define T ll t=0;cin>>t;for(ll test=0;test<t;test++)
 
int main(){
	 ios_base::sync_with_stdio(false);
     cin.tie(0);cout.tie(0);
    T{
       ll i=0,j=0,n=0,m=0,x=0,y=0,cnt=0,ans=0,c=0,c1=0,c2=0,d=0,flg=0;
       cin>>n;
       ll a[n];
       fo(i,n)cin>>a[i];
       string s(51,'a');
       cout<<s<<endl;
       for(i=0;i<n;i++){
        for(j=0;j<a[i];j++)cout<<s[j];
 
        if(s[j]=='a'){
            for(x=a[i];x<51;x++){cout<<'b';s[x]='b';}
        }
        else if(s[j]=='b'){
            for(j=a[i];j<51;j++){cout<<'a';s[j]='a';}
        }
        cout<<endl;
       }
    }
    return 0;
}
