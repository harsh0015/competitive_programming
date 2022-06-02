#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ceel(x, y) ((x) / (y) + !((x) % (y) == 0))
#define ff first
#define ss second
#define endl '\n'
#define print(v) for(auto x : v) cout << x << ' '; cout << endl;
#define debug(v) cout << #v << " = "; print(v);
#define printmp(v) for(auto x : v) cout << x.first << ' ' << x.second << endl; cout << endl;
using namespace std;
typedef long long int ll;
typedef long double ld;

void solve(){
 int n;cin>>n;
 int arr1[n],arr2[n];

 for(int i=0;i<n;i++)cin>>arr1[i];

     for(int i=0;i<n;i++)cin>>arr2[i];

        int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1=sum1+arr1[i];
        sum2=sum2+arr2[i];
    }

    if(sum1 !=sum2){
        cout <<-1<<endl;
        return;
    }

    int i=0;
    int count=0;
    vector<pair<int,int>>v;

    while(i<n){
        if(arr1[i]==arr2[i]){
            i++;
            continue;
        }
        else if(arr1[i]<arr2[i]){
            int j=i+1;
            while(j<n){
                if(arr1[j]>arr2[j]){
                    count++;
                    v.push_back({i+1,j+1});
                    arr1[i]++;
                    arr1[j]--;
                }
                else j++;

                if(arr1[i]==arr2[i])break;

            }
        }
        else{
            int j=i+1;
            while(j<n){
                if(arr1[j]<arr2[j]){
                    v.push_back({j+1,i+1});
                    count++;
                    arr1[i]--;
                    arr1[j]++;
                }
                else j++;

                if(arr1[i]==arr2[i])break;

            }
        }
        i++;
    }

cout <<count <<endl;

for(int i=0;i<v.size();i++)cout <<v[i].second<<" "<<v[i].first<<endl;
    
 
}


int main(){
    fastio;

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}