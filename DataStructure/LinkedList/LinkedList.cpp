/*
Note: 

Keep the usage of in-built function to the minimum
Add/Optimize  features
Please follow best coding practices
Add comments if necessary
And make the Code Bug free

*/

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node( int n ) {
        data = n;
        next = NULL;
    }
};

class LinkedList{

public:
    int size;
    Node *root;

    LinkedList(){
        root = NULL;
        size = 0;
    }

    void add( int num ) {
        Node *newNode = new Node( num );
        newNode->next = root;
        root = newNode;
        size++;
    }

    // Add appropriate message when the list is empty
    void del() {
        Node *nodeToBeDeleted = root;
        root = root->next;
        cout << "Deleting: " << nodeToBeDeleted->data << endl ;
        delete nodeToBeDeleted;
        size--;
    }

    Node* elementAt( int index ) {
    //     LinkedList: 10 <- 20 <- 30 <- 40
    //     Index:      0     1     2     3
    
        int len = size-1;
        Node *temp = root;

        while( index != len ) {
            temp = temp->next;
            len--;   
        }

        return temp;

    }

    void print() {
        if(root){
        Node* temp = root;
        cout << "Values: " ;
        while( temp ) {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        cout << endl ;
        }
        else{
            cout<<endl<<"EMPTY LIST";
        }
    }

    // Test and Complete the following methods

    /*
    void printReverse(){
    
    }

    void reverse() {
        // Reverse the content of the list

    }

    void sort(){
        // sort elements of list ( ascending )

    }

    
    */
    bool contains( int value ) {
        Node* temp=root;
        while(temp){
            if(int(temp->data)==value){
                cout<<endl<<"List contains "<<value<<endl;
                return 0;
            }
            temp=temp->next;
        }
        cout<<endl<<"List doesn't contains "<<value<<endl;
        return 1;
    }

    
    void clear(){
        root = NULL;
        size = 0; 
    }
        
};

int main() {
    LinkedList ll = LinkedList();
    ll.add( 1 );
    ll.print();

    ll.add( 2 );
    ll.print();
    
    ll.del();
    ll.print();

    ll.add(3);
    ll.add(4);
    ll.print();
    
    int ind = 1 ;
    Node *node = ll.elementAt( ind );
    cout << "Element at index " << ind << ": " << node->data;
    
    ll.contains(8);
     ll.clear();
     ll.print();
    return 0;
}
