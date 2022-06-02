#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
          int t;
          cin >> t;
          while(t--){
                    int n;
                    cin >> n;
                    int a[n+1];
                    cin >> a[1];
                    int f=0;
                    for(int i=2;i<=n;++i){
                              cin >> a[i];
                              if(a[i]!=a[i-1]){
                                        f=1;
                              }
                    }
                    if(f==0){
                              cout << "NO" << endl;
                    }
                    else{
                              cout << "yes" << endl;
                              int j=0;
                              for(int i=2;i<=n; ++i){
                                        if(a[i]!=a[1]){
                                                  j=i;
                                        }
                              }
                              for(int i=2;i<=n;++i){
                                        if(a[i]!=a[1]){
                                                  cout << 1 << " " << i << endl;
                                        }
                                        else{
                                                  cout << j << " " << i << endl;
                                         }
                              }
                    }
          }
}