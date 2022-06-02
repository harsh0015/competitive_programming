// #include<bits/stdc++.h>
// using namespace std;

// pair<int ,int > cal(string s,int r,char c){
// // cout <<r<<"^"<<c<<endl;
// 	pair<int ,int > p;
// 	int var;
//      // for(int i=r+1;i<s.length();i++){
//      // 	if(s[i]==c)var=i;
//      // }

//     p.first=0;
//     p.second=0;

//     for(int i=0;i<=r;i++){
//     	if(s[i]=='U'){
//     		p.second++;
//     	}
//     	if(s[i]=='D'){
//     		p.second--;
//     	}
//     	if(s[i]=='R'){
//     		p.first++;
//     	}
//     	if(s[i]=='L'){
//     		p.first--;
//     	}
//     }

//     return p;
    

// }

// int main(){

// 	int t;cin >>t;

// 	while(t--){

// 		string s;cin >>s;

// 		unordered_map<char,int >m;

// 		for(int i=0;i<s.length();i++){
// 			if(m.find(s[i])==m.end())
// 				m[s[i]]=1;
// 			else m[s[i]]++;
// 		}

// 		if(m.find('L')==m.end())m['L']=0;
// 		if(m.find('R')==m.end())m['R']=0;
// 		if(m.find('U')==m.end())m['U']=0;
// 		if(m.find('D')==m.end())m['D']=0;

// 		if(m['L']==m['R'] && m['U']==m['D'])
// 		{
// 			cout <<0<<" "<<0<<endl;
// 			continue;
// 		}
//        if(m['L']!=m['R'] && m['U']!=m['D'])
// 		{
// 			cout <<0<<" "<<0<<endl;
// 			continue;
// 		}

// 		if(m['L']!=m['R']){
// 			bool flag=false;
// 			int r=0;
// 			char check=m['L']>m['R']?'L':'R';

// 			char check2= check=='L'?'R':'L';

// 			int count=m[check]-m[check2];


//         int counter=0;
// 			for(int i=0;i<s.length();i++){
				
//              if(s[i]==check){
//              	counter++;
//              	if(counter >m[check2]){
//              		r=i;
//              		break;
//              	}
//              }
				
// 			}

			

//             pair<int ,int >p=cal(s,r,check);

//             cout <<p.first<<" "<<p.second<<endl;
//             continue;
// 		}

// 		////////////////////
// 		if(m['U']!=m['D']){
// 			bool flag=false;
// 			int r=0;
// 			char check=m['U']>m['D']?'U':'D';

// 			char check2= check=='U'?'D':'U';

// 			int count=m[check]-m[check2];
//              // cout <<count<<"*"<<endl;
// 			int counter =0;
// 			for(int i=0;i<s.length();i++){
// 				 if(s[i]==check){
//              	counter++;
//              	if(counter >m[check2]){
//              		r=i;
//              		break;
//              	}
//              }
				
			
// 			}

// 			if(flag){
// 				cout <<0<<" "<<0<<endl;
// 				continue;
// 			}

//             pair<int ,int >p=cal(s,r,check);

//             cout <<p.first<<" "<<p.second<<endl;
//             continue;
// 		}




// 	}
// }

#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
 
#define all(x) (x).begin(), (x).end()
 
void go(char c, int &x, int &y)
{
    if (c == 'R') x++;
    if (c == 'L') x--;
    if (c == 'U') y++;
    if (c == 'D') y--;
}
 
void go_obs(char c, int &x, int &y, int ox, int oy)
{
    if (c == 'R' && (x + 1 != ox || y != oy)) x++;
    if (c == 'L' && (x - 1 != ox || y != oy)) x--;
    if (c == 'U' && (x != ox || y + 1 != oy)) y++;
    if (c == 'D' && (x != ox || y - 1 != oy)) y--;
}
 
int sim(string s, int lx, int ly)
{
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
        go_obs(s[i], x, y, lx, ly);
    return (x == 0 && y == 0);
}
 
void solve()
{
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < s.size(); i++)
    {
        go(s[i], x, y);
        if (x != 0 || y != 0)
        {
            if (sim(s, x, y))
            {
                cout << x << " " << y << "\n";
                return;
            }
        }
    }
    cout << "0 0\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}