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


node* lca(node* root, int a, int b){
	//base case
	if(root==NULL){
		return NULL;
	}
	if(root->data==a or root->data==b){
		return root;
	}

	//otherwise-
	//search in left and right subtree
	node* leftans=lca(root->left,a,b);
	node* rightans=lca(root->right,a,b);

	if(leftans!=NULL and rightans!=NULL){
		return root;//because if the a and b present in the oppposite siides of the root then root will definitely be the lca
	}

	if(leftans!=NULL){
		return leftans;
	}
	return rightans;

}

int main(){
		node* root=buildTree();
		cout<<lca(root,7,13)->data<<endl;
	return 0;
}

