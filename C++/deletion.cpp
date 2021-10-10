#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
};
struct Node* newnode(int key){
    struct Node* temp=new Node;
    temp->key=key;
}