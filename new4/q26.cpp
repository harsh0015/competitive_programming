#include<bits/stdc++.h>
using namespace std;
bool emp[10000001];
bool exiti[1000001];

void newDay(bool b){
     
     for(int i=1;i<=1000000;i++){
     	emp[i]=false;
     	exiti[i]=false;
     }
}

bool check(bool b){
	bool flag=true;

	for(int i=1;i<1000000+1;i++){
		if(emp[i]){
			flag=false;
			break;
		}
	}

	if(flag) return true;
	else return false;
}
int main(){

	int n;cin >>n;

	int arr[n];

	for(int i=0;i<n;i++)cin >>arr[i];

	int count=0;
vector<int >v;
bool flag=true;
newDay(true);

  for(int i=0;i<n;i++){


    if(arr[i]>0){
    	if(exiti[arr[i]]){
          count++;
          v.push_back(i+1);
          if(check(true)){
          	newDay(true);
          }
          else {
          	flag=false ;
          	break;
          }
    	}

      if(emp[arr[i]]){
      	flag=false;
      	break;
      }
      else{
      	emp[arr[i]]=true;
      }
    }

    else {
    	if(emp[abs(arr[i])]){
    		exiti[abs(arr[i])]=true;
    		emp[arr[i]]=false;
    	}
    	else {
    		flag=false;
    		break;
    	}
    }
  }

  if(flag){
  	cout <<count<<endl;
  }
  else cout <<-1;

	
   
}
