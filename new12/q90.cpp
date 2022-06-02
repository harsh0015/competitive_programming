#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define LD long double
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<double,double> dd;
#define unordered_set uset
#define unordered_map umap
#define F first
#define S second
#define B begin()
#define E end()
#define endl "\n"
#define lb cout<<"\n"   
#define sz(a) int((a).size())
#define pb push_back
#define mp make_pair
#define be(x) x.begin(), x.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define fo(i, n) for(auto i=0; i<n; i++)
#define present(container, element) (container.find(element) != container.end())
#define presenta (container, element) (find(all(container),element) != container.end())
#define prvec(v) cout<<"[ ";for(auto &z:v) cout<<z<<' ';cout<<']\n' ;
#define prval(x) cout<<#x <<" = "<< x <<", ";
#define debug(x) {cerr << #x <<" = " <<x <<endl;}
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clks clock_t start_time=clock()
#define te cout<<(clock()-start_time)/(double)CLOCKS_PER_SEC<<endl
#define clean(arr) memset(arr,0,sizeof(arr))
const double eps = 1e-8;
const int mod = 1e9 + 7;
const int inf = INT32_MAX;
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        int a[n+1];
        ll sum=0;
        fo(i,n){
            cin>>a[i+1];
            sum+=a[i+1];
        }
        if(sum<k){
            cout<<0<<endl;
            continue;
        }
        
        sort(a+1, a+n+1);
        ll prev=0;
        ll res =sum-k;

        for(int i=n; i>1; i--){
            prev+= a[i]-a[1];
            ll cnt = n-i+1;

            ll ans = cnt;
            if( sum -prev > k )
                ans +=  (sum-prev-k+cnt)/(cnt+1) ;
            res = min(res, ans);
        }
        cout<<res<<endl;
    }
    return 0;
}








