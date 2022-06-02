 #include<bits/stdc++.h>
    using namespace std;
    #define endl "\n"
    #define mp make_pair
    #define ll long long
 
int main(){
 
    ios_base::sync_with_stdio(false);cin.tie(NULL);
   /* // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    */
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<n/2<<endl;
        for(int i=0;i<n-1;i+=2){
            int num=1e9+7;
            cout<<i+1<<" "<<i+2<<" "<<min(arr[i],arr[i+1])<<" "<<num<<endl;
        }
        
    }
 
}