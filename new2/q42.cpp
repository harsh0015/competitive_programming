#include<bits/stdc++.h>
using namespace std;

vector<string> removeDupWord(string str)
{    vector<string>v;
    string word = "";
    for (auto x : str) 
    {
        if (x == ' ')
        {
            v.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    v.push_back(word);

    return v;
}

int convert(string s){
int a=0;
	if(s[6]=='A'){
     string s1="";
     s1=s1+s[0];
     s1=s1+s[1];

     stringstream geek(s1);
     int r;
     geek >>r;
    if(r==12)r=0;


     a=a+r*60;

     string s2=s.substr(3,4) ;

     stringstream geek1(s2);
     int x;geek1>>x;

     a=a+x;

	}

	if(s[6]=='P'){
     string s1="";
     s1=s1+s[0];
     s1=s1+s[1];

     stringstream geek(s1);
     int r;
     geek >>r;
     if(r==12)r=0;


    r=r+12;

     a=a+r*60;

     string s2=s.substr(3,4) ;

     stringstream geek1(s2);
     int x;geek1>>x;

     a=a+x;

	}

	return a;
}

int main(){

	int t;cin >>t;
  cin.ignore();
	while(t--){
      
		string s; getline(cin, s);

		// cout <<"("<<s<<")"<<endl;

        int check=convert(s);

        // cout <<check<<"*"<<endl;

        string ans="";
        int n;cin >>n;


        for(int i=0;i<n;i++){
        	int a,b;
        	string s1;
        	// cin.ignore();

        	getline(cin >> ws, s1);
     
        	// cout <<"("<<s1<<")"<<endl;
        	

        	// cout <<"&"<<s1.length()<<"&"<<endl;



        	vector<string> inputWords=removeDupWord(s1);

        	// cout <<"*"<<inputWords.size()<<"*"<<endl;

        	string s2=inputWords[0]+" "+inputWords[1];

        	string s3=inputWords[2]+" "+inputWords[3];

        	// cout <<"&"<<s2.length()<<"&"<<endl;

        	if(s2.length()==7)s2=s1[0]+s2;

        	// cout <<s1.length()<<"&";
        	// s2=s1.substr(9,16);

        	// s1=s1.substr(0,8);

        	// cout <<s1<<"*"<<s2<<endl;
 
              // cout <<"("<<s2<<")"<<"("<<s3<<")"<<endl;
        	 a=convert(s2);
        	 b=convert(s3);
            
        	 if(check>=a && check<=b)
        	 	ans=ans+"1";
        	 else ans=ans+"0";
        }

        cout <<ans<<endl;
	}
}