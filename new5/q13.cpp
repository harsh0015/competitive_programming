#include <iostream>
 
using namespace std;
 
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;++i){
        int a;
        int b;
        cin>>a>>b;
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;++i){
            if(s[i]=='1'){
                b--;
            }
            if(s[i]=='0'){
                a--;
            }
        }
        for(int i=0;i<n;++i){
            if(s[i]=='?'){
                if(s[n-i-1]=='1'){
                    s[i]='1';
                    b--;
                }
                if(s[n-i-1]=='0'){
                    s[i]='0';
                    a--;
                }
            }
        }
        for(int i=0;i<=n/2-1;++i){
            if(s[i]=='?' && a>1){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            else if(s[i]=='?' && b>1){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
        }
        if(n%2==1 && s[n/2]=='?'){
            if(a>0){
                s[n/2]='0';
                a--;
            }
            else if(b>0){
                s[n/2]='1';
                b--;
            }
        }
        int fl=1;
        for(int i=0;i<=n/2-1;++i){
            if(s[i]!=s[n-i-1]){
                fl=0;
                break;
            }
            if(s[i]=='?'){
                fl=0;
                break;
            }
        }
        if(a==0 && b==0 && fl==1){
            for(int i=0;i<n;++i){
                cout<<s[i];
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
 
    return 0;
}