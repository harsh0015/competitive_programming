#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
int lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

int main(){

	int t;cin >>t;

	while(t--){

		string s1,s2;cin >>s1>>s2;

		if(s1.length()==s2.length()){
			if(s1==s2)cout <<s1<<endl;
			else cout <<-1<<endl;
		}


		else {
			int a=s1.length();
			int b=s2.length();
			int l=lcm(a,b);

		

			string sx="",sy="";

			for(int i=0;i<l/a;i++)sx=sx+s1;

				for(int i=0;i<l/b;i++)sy=sy+s2;

					if(sx==sy)cout <<sx<<endl;
				else cout <<-1<<endl;


		}
	}
}