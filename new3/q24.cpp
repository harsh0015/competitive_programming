// #include <bits/stdc++.h>
// #include<iostream>
// #include<fstream>
// #include<cstdlib>
// #include<string>
// #include<vector>
// #include<cmath>
// #include<set>
// #include<algorithm>
// #define endl "\n"
// #define pb push_back
// #define fi first
// #define se second
// #define pi 3.14159265358979323846
// #define M  998244353
// using namespace std;
// typedef long long int  lli;
// int main()
// {
//     ios::sync_with_stdio(false); 
//     cin.tie(0);
//     cout.tie(0);
//     int t;
//     cin>>t;
//     while(t--)
//     {
//        int n;
//        cin>>n;
//        int a[n];
//        for(int i=0;i<n;i++)
//        {
//            cin>>a[i];
//        }
//        sort(a,a+n);
//      //  int i=0,j=n-1;
//        int maxi=INT_MIN;
//        for(int k=1;k<101;k++)
//        {
//            int i=0;
//            int j=n-1;
//            int count=0;
//            while(i<j)
//            {
//                if(a[i]+a[j]==k)
//                {
//                    i++;
//                    j--;
//                    count++;
//                }
//                else if(a[i]+a[j]<k)
//                {
//                    i++;
//                }
//                else
//                {
//                    j--;
//                }
//            }
//            maxi=max(count,maxi);
           
//        }
//        cout<<maxi<<endl;
//     }
   
// }

#include <bits/stdc++.h>
#define lp(i,a,b) for(ll i=a;i<b;i++)
#define ARR(i,n) for(ll i=n-1;i>=0;i--)
#define F(i,a,b)  for(ll i=b-1;i>=a;i--)
#define float double
#define PI 3.14159265358979323846
#define pb push_back
#define mp make_pair
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define ceil(a) (ll) ceil(a)
#define floor(a) (ll) floor(a)
#define pow(a,b) (ll) pow(a,b)
#define fixed(x) cout<<fixed<<setprecision(6)<<x;
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define integer_to_string to_string 
#define IOS  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
typedef long long ll;
using namespace std;
const ll  mod = 1000000000 + 7;
/*freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);*/
 
 
// CPP program to check for balanced brackets. 
#include <bits/stdc++.h> 
using namespace std; 
  
// function to check if brackets are balanced 
bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(' )
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false;
        else s.pop();
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 
 
void solve()
{
	//code start here
	string ss,s;
	cin>>ss;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			for(int z=0;z<2;z++){
				s=ss;
				for(int ii=0;ii<s.size();ii++){
					if(i==0 && s[ii]=='A') s[ii]='(';
					else if(i==1 && s[ii]=='A') s[ii]=')';
 
					if(j==0 && s[ii]=='B') s[ii]='(';
					else if(j==1 && s[ii]=='B') s[ii]=')';
 
					if(z==0 && s[ii]=='C') s[ii]='(';
					else if(z==1 && s[ii]=='C') s[ii]=')';
				}
				if(areBracketsBalanced(s)){cout<<"YES\n"; return;}
			}
		}
	}
	cout<<"NO\n";
 
}
int main()
{
    IOS;
    int t=1;
    cin>>t;
    while(t--)
      solve();
    return 0;
}
