#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
    }
    void addToNode(int x){
        if(this->data>x){
            if(this->left==nullptr){
                Node* newNode = new Node(x);
                this->left = newNode;
                return;
            }else{
                this->left->addToNode(x);
            }
        }else if(this->data<x){
            if(this->right==nullptr){
                Node* newNode = new Node(x);
                this->right = newNode;
                return;
            }else{
                this->right->addToNode(x);
            }
            
        }
    }
    void printLNRNode(){
        if(this->left!=nullptr){
            this->left->printLNRNode();
        }
        cout<<this->data<<" ";
        if(this->right!=nullptr){
            this->right->printLNRNode();
        }
    }
};
class BST{
public:
    Node* root;
    BST(){
        this->root=nullptr;
    }
    void addtoBST(int x){
        if(this->root==nullptr){
            Node* newNode = new Node(x);
            this->root = newNode;
        }else{
            this->root->addToNode(x);
        }
    }
    void printLNR(){
        if(this->root!=nullptr){
            this->root->printLNRNode();
        }
    }
};
int main(){
    int a[5]={11,22,1,2,4};
    BST bst;
    for(auto x:a){
        bst.addtoBST(x);
    }
    bst.printLNR();
}