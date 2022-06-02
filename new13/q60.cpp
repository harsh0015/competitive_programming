#include <bits/stdc++.h>
using namespace std;

pair<double,double> solve(double m,double n,double r){
    double a_num=0;
    double a_den=1;
    double b_num=1;
    double b_den=1;
    bool flag=true;

    while(flag){
        double c_num=a_num+b_num;
        double c_den=a_den+b_den;

        if(c_num>n || c_den>m){
            if((r-((a_num)/a_den))< (((b_num)/b_den)-r))
                return {a_num,a_den};
            else return {b_num,b_den};
        }
        if((c_num/c_den)<r){
            a_num=c_num;
            a_den=c_den;
        }
        else{
            b_num=c_num;
            b_den=c_den;
        }
    }
}
int main(){
    double x;cin>>x;
    x=sqrt(x);
    x=x/7;
    double n=1e18;
    double m=1e18;

    auto ans=solve(n,m,x);
      ans.first=ans.first*7;
    double aa=ans.first/ans.second;
    double an=(aa*aa);
  cout <<std::setprecision(17)<<ans.first<<" "<<ans.second<<endl;
   cout <<std::setprecision(17)<<an<<endl;

}