#include <bits/stdc++.h> 
using namespace std;
#define lli long long int
 
lli number(lli n){
    lli num=0;
    for(int i=0;i<n;i++){
        num+=pow(10,i);
    }
    return num;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    lli t;
    cin>>t;
    while(t--){
        lli n,l,r;
        cin>>n>>l>>r;
 
        vector<lli>a;
        for(int i=0;i<n;i++){
            lli ai;
            cin>>ai;
            a.push_back(ai);
        }
 
        sort(a.begin(),a.end());
 
        lli count=0;
        for(int i=0;i<n;i++){
            auto x=lower_bound(a.begin()+i+1,a.end(),l-a[i])-a.begin();
            auto y=upper_bound(a.begin()+i+1,a.end(),r-a[i])-a.begin();

            cout <<x<<" "<<y<<endl;
            if(x>0 && x<=n && y>0 && y<=n){count+=y-x;}
        }
 
        cout<<count<<"\n";
 
        
    }
}
