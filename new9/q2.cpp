#include<bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;

#define pb push_back
#define mp make_pair
#define vi vector <int> 
#define vii vector<vector<int>>
#define mset multiset <int> 
#define nl endl
#define flag() cout<<"here"
#define deb(x) cout<<#x<<":"<<x<<nl
#define dbg(x,y) cout<<#x<<":"<<x<<" "<<#y<<":"<<y<<nl
#define arrvec(x) for(auto i:x)cout<<i<<" "; cout<<nl;
#define setarr(x,y) for(auto &i:x)i=y;

const ll mod = 1e9 + 7;
const int maxInt = INT_MAX;



bool solve()
{  
    int n;
    cin>>n;

    bool found=true;

    vi vec1(n+1),vec2(n+1),vec3(n+1),vec4(n+1),vec5(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>vec1[i]>>vec2[i]>>vec3[i]>>vec4[i]>>vec5[i];
    }

    int ans=1;

    for(int i=1;i<=n;i++)
    {
        int tans=0;

        if(vec1[i]>vec1[ans])tans++;
        if(vec2[i]>vec2[ans])tans++;
        if(vec3[i]>vec3[ans])tans++;
        if(vec4[i]>vec4[ans])tans++;
        if(vec5[i]>vec5[ans])tans++;
        
        if(tans<3)
        {
            ans=i;
        }

    }

    for(int i=1;i<=n;i++)
    {
        int tans=0;
        
        if(i!=ans){

        if(vec1[i]>vec1[ans])tans++;
        if(vec2[i]>vec2[ans])tans++;
        if(vec3[i]>vec3[ans])tans++;
        if(vec4[i]>vec4[ans])tans++;
        if(vec5[i]>vec5[ans])tans++;
        
         if(tans<3)
        {
            found=false;
            break;
        }        

        }
    }



    if(found)
    {
        cout<<ans<<nl;
    }

    else
        cout<<-1<<nl;
 
    return true;
}

int main()       
{
    
    #ifndef ONLINE_JUDGE
        freopen("Input.txt","r",stdin);
        freopen("Output.txt","w",stdout);
    #endif
        
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

    /***************Write code here*******************/
    

    

    int tests;
    cin>>tests; 

    while(tests--)
    {    
        solve();
    }

    

    #ifndef ONLINE_JUDGE
    cerr<< "Executed in : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    #endif
    
    return 0;
}