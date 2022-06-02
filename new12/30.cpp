#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
#define test ll tusd=0;cin>>tusd; for(ll peteyg=1;peteyg<=tusd;peteyg++)
#define loop(i,a,b) for(i=a;i<=b;i++)
#define loopr(i,a,b) for(i=a;i>=b;i--)
#define lb lower_bound
#define ub upper_bound
#define mid(l,r) mid=l+(r-l)/2
#define fi first
#define se second
#define yess cout<<"YES\n"
#define noo cout<<"NO\n"
#define pb push_back
#define mp make_pair
#define pq priority_queue
#define bs binary_search
#define umap unordered_map
#define vpll vector<pair<ll,ll>>
#define vll vector<ll>
#define PI 3.141592653589793238
#define all(x) x.begin(),x.end()
#define memes(x,val) memset(x,val,sizeof(x))
#define sortall(v) sort(v.begin(),v.end())
ll mod=1000000007;

int main()
{
    fastio;
    test{
        int n;
        ll k;
        ll f[10]={0};
        cin>>n>>k;
        string s=to_string(n);
        ll i;
        //cout<<s<<"\n";
        for(i=0;i<s.length();i++)
        {
            ll j=s[i]-'0';
            //cout<<j;
            f[j]++;
        }
      //  for(i=0;i<9;i++)cout<<f[i];
        for(i=0;i<9;i++)
        {  
            if(f[i]>=k)
            {
                f[i+1]+=k;
                f[i]-=k;
                k=0;
                break;
            }
            else{
                f[i+1]+=f[i];
                k-=f[i];
                f[i]=0;
                
            }
        }
        ll ans=1;
        for(i=0;i<10;i++){
            ans*=pow(i,f[i]);
        }
        cout<<ans<<"\n";
    }
   
    
}
