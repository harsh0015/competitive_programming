// #include<bits/stdc++.h>
// using namespace std;

// typedef long long int ll;

// int main(){

// 	ll t;cin >>t;

// 	while(t--){

// 		ll a,h,n;cin >>a>>h>>n;

// 		ll arra[n],arrh[n];

// 		for(ll i=0;i<n;i++)cin >>arra[i];

// 			for(ll i=0;i<n;i++)cin >>arrh[i];

// vector<pair<ll ,ll >>v;

//   for (ll i=0; i<n; i++) 
//         v.push_back( make_pair(arra[i],arrh[i]) ); 

//        sort(v.begin(), v.end()); 
//   bool flag=true;
// 	for(ll i=0;i<n;i++){
// 		h=h- ceil(float(v[i].second)/float(a))*v[i].first;
    
//     if(h<=0){
//     	if(i<n-1){
//     		flag=false;
//     		break;
//     	}

//     	if(i==n-1 && v[i].second-a>0){
//     		flag=false;
//     		break;
//     	}
//     }

   

// 	}
       
// 	if(flag)cout <<"YES"<<endl;
// 	else cout <<"NO"<<endl;
// 	}
// }
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll>llvec;
bool cond(llvec a,llvec b){
    return a.first<b.first;
}
int main(){
    int t;
    cin>>t;
    //cin.ignore();
    while(t--){
        ll A,B,n,i,j,cnt=0;
        cin>>A>>B>>n;
        ll o;
        vector<llvec>vec;
        for(i=0;i<n;i++){
            cin>>o;
            vec.push_back(llvec(o,0));
        }
        for(i=0;i<n;i++){
            cin>>o;
            vec[i].second=o;
        }
        bool c=1;
        sort(vec.begin(),vec.end(),cond);
        for(i=0;i<n;i++){
            ll fights=vec[i].second/A;
            if(vec[i].second%A!=0){
                fights++;
            }
            B-=(fights*vec[i].first);
            vec[i].second-=(fights*A);
            if(B<=0){
                B+=(fights*vec[i].first);
                vec[i].second+=(fights*A);
                ll mon_need=B/vec[i].first;if(B%vec[i].first!=0)mon_need++;
                ll h_need=fights;
                if(h_need<=mon_need){
                    cnt++;
                }
                break;
            }
            cnt++;
        }
        if(cnt==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;   }