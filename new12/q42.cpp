#include<bits/stdc++.h>
using namespace std;

class Trie{
public:
	class node{
	public:
		bool end;
        node* next[26];

        node(){
        	end=false;
        	for(int i=0;i<26;i++)
        		next[i]=NULL;
        }
	};
	node* trie;

	Trie(){
		trie=new node();
	}

	void insert(string s){

		int i=0;
		node* it=trie;
		while(i<s.length()){
           if(it->next[s[i]-'a']==NULL)
           	   it->next[s[i]-'a']=new node();
           
           it=it->next[s[i]-'a'];
           i++;
		}
		it->end=true;

	}
	bool search(string s){
		int i=0;
		node* it=trie;
		while(i<s.length()){
			if(it->next[s[i]-'a']==NULL)return false;
			 
		it=it->next[s[i]-'a'];
		i++;
		}
		return it->end;
	}
};

int main(){
	Trie *myTrie =new Trie();
	myTrie->insert("harsh");
	myTrie->insert("deep");

	if(myTrie->search("deep")){
		cout <<"found"<<endl;
	}
	else cout <<"not found";
}