#include<bits/stdc++.h>
using namespace std;

class node{
public:
	int data;
	node * next;
};

int main(){

node * first=new node();
node * head=first;

node * sec=new node();

first->data=1;
first->next=sec;
sec->data=2;
sec->next=NULL;

while(head!=NULL){
	cout << head->data<<endl;
      head=head->next;
}
}