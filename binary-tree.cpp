#include <iostream>

using namespace std;


struct Node {
	int data;
	Node* left;
	Node* right;
	
	Node(int val){
		data=val;
		left = nullptr;
		right = nullptr;
	}
	
};

Node* insertLeft(Node* root, int value){
	root->left = new Node(value);
	return root->left;
}

Node* insertRight(Node* root, int value){
	root->right = new Node(value);
	return root->right;
}

void inOrder(Node* root){
	if (root == nullptr){
		return;
	} 
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void preOrder(Node* root){
	if (root == nullptr){
		return;
	} 
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);

}

void postOrder(Node* root){
	if (root == nullptr){
		return;
	} 
	preOrder(root->left);
	preOrder(root->right);
	cout << root->data << " ";
}

void levelOrderX(Node* x,int i){

	Node* tree1 = x;
	Node* first = x->left;
	Node* second = x->right;
	if (i == 1){
		cout << tree1->data << " ";
	}
	cout << first->data << " ";
	cout << second->data << " ";
	
}

void levelOrder(Node* root){
	Node* tree1 = root;
	Node* first = root->left;
	Node* second = root->right;

		cout << tree1->data << " ";

	cout << first->data << " ";
	cout << second->data << " ";
	levelOrderX(first, 0);
	levelOrderX(second, 0);

}


int main(){
	Node* root = new Node(1);
	Node* leftChild = insertLeft(root, 2);
	Node* rightChild = insertRight (root, 3);
	
	insertLeft(leftChild,4);
	insertRight(leftChild,5);
	insertLeft(rightChild,6);
	insertRight(rightChild, 7);
	
	
	cout << "InOrder: "; inOrder(root);
	cout << endl;
	cout << "PreOrder: "; preOrder(root);
	cout << endl;
	cout << "postOrder: "; postOrder(root);
	cout << endl;
	int i = 0;
	cout << "LevelOrder: "; levelOrder(root);
	cout << endl;
	
	
	
	
	
	
}