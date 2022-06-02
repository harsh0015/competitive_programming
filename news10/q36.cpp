#include<bits/stdc++.h>
using namespace std;
/*Binary Tree representation using structure where data is in integer and 2 pointer
struct Node* left and struct Node* right represents left and right pointers of a node
in a tree respectively*/
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int x){
		data = x;
		left = right = NULL;
	}
};
/*Recursive helper function which will recursively update our ans vector.
it takes root of our tree ,arr vector and ans vector as an argument*/

void helper(Node* root,vector<int> arr,vector<vector<int>> &ans)
{
	if(!root)
		return;
	arr.push_back(root->data);
	if(root->left==NULL && root->right==NULL)
	{
	/*This will be only true when the node is leaf node
		and hence we will update our ans vector by inserting
		vector arr which have one unique path from root to leaf*/
	ans.push_back(arr);
	//after that we will return since we don't want to check after leaf node
		return;
	}
	/*recursively going left and right until we find the leaf and updating the arr
	and ans vector simultaneously*/
	helper(root->left,arr,ans);
	helper(root->right,arr,ans);
}
vector<vector<int>> Paths(Node* root)
{
	/*creating 2-d vector in which each element is a 1-d vector
	having one unique path from root to leaf*/
	vector<vector<int>> ans;
	/*if root is null than there is no further action require so return*/
	if(!root)
		return ans;
	vector<int> arr;
	/*arr is a vector which will have one unique path from root to leaf
	at a time.arr will be updated recursively*/
	helper(root,arr,ans);
	/*after helper function call our ans vector updated with paths so we will return ans vector*/
	return ans;
}
int main()
{
/*defining root and our tree*/
	Node *root = new Node(10);
	root->left = new Node(8);
	root->right = new Node(2);
	root->left->left = new Node(3);
	root->left->right = new Node(5);
	root->right->left = new Node(2);
/*The answer returned will be stored in final 2-d vector*/
vector<vector<int>> final=Paths(root);
/*printing paths from root to leaf*/
for(int i=0;i<final.size();i++)
{
		
	for(int j=0;j<final[i].size();j++)
			cout<<final[i][j]<<" ";
		cout<<endl;
}
}
