#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* buildTree(){
	int d; 
	cin>>d;

	//base case
	if(d==-1){
		return NULL;
	}
	node* root= new node(d);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}
void printPre(node* root){
		if(root==NULL){
			return;
		}	
		cout<<root->data<<" ";
		printPre(root->left);
		printPre(root->right);
}
void printRightView(node* root, int level, int &maxLevel){
	//base case
	if(root==NULL){
		return;
	}
	//recursive case
	if(maxLevel<level){
		cout<<root->data<<" ";
		maxLevel=level;
	}
	// traversing through subtrees
	printRightView(root->right,level+1,maxLevel);
	printRightView(root->left,level+1,maxLevel);
}


int main(){
		node* root=buildTree();
    int maxLevel= -1;
		printRightView(root,0,maxLevel);
	return 0;
}

/*


ip=>8 10 1 5 87 89 -1 -1 6 9 11 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
op=>8 3 14 13

*/
