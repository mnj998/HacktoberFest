#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* deleteFirstNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    //move the head pointer to next node
    Node* tempNode=head;
    head=head->next;
    delete tempNode;

    return head;
}

Node* removeLastNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    //first find second last node
    Node* second_last=head;
    while(second_last->next->next!=NULL)
    second_last=second_last->next;
}