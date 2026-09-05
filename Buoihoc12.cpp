#include <iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int data)                         {
        this->data=data;
        this->next=nullptr;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    LinkedList(){
        this->head=this->tail=nullptr;
    }
    void InsertTail(int data){
        Node* NewNode= new Node(data);
        if(this->head==nullptr){
            this->head=this->tail=NewNode;
        }else{
            this->tail->next=NewNode;
            this->tail=NewNode;
        }
    }
    void traverse(){
        Node* cur = this->head;
        while(cur!=nullptr){
            cout<<cur->data<<" ";
            cur=cur->next;
        }
    }
    void min(){
        int n=0;
        Node* cur = this->head;
        while(cur!=nullptr){
            if()
        }
    }
}