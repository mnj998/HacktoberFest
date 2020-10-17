/*
Note:

Keep the usage of in-built function to the minimum
addOneEle/Optimize  features
Please follow best coding practices
addOneEle comments if necessary
And make the Code Bug free

*/

#include<stdio.h>
#include<stdlib.h>

typedef struct _Node{
    int data;
    struct _Node* next;
} Node ;

typedef struct _Queue{
    Node *front, *rear;
} Queue ;



Node* createNode( int num ) {
    Node* node = (Node*) malloc ( sizeof(Node) );
    node->data = num;
    node->next = NULL;
    return node;
}

Queue* createQueue(){
    Queue *qu = ( Queue* ) malloc ( sizeof(Queue) );
    qu->front = qu->rear = NULL;
}

Queue* addOneEle( Queue* qu, int num ){

    if( !qu->rear )
        qu->front = qu->rear = createNode( num );
    else 
        qu->rear->next = createNode( num );
    return qu;
}

Queue* delOneEle( Queue* qu ){
    if( qu->front ){
        Node* temp = qu->front;
        qu->front = qu->front->next;
        free( temp );
    }
    return qu;
}
void printFrontToRear( Queue* qu ) {
    printf("Queue Values: ") ;
    Node* temp = qu->front;
    while( temp ){
        printf( "%d ", temp->data );
        temp = temp->next;
    }
    printf("\n");

}
/*
Complete the following

// Should return element present at the front
int eleAtFront(){

}

// Should return element present at the rear
int eleAtRear(){
    
}

// Should return element at the specified index
Node* elementAt( int index ) {
//     Queue: 10 -> 20 -> 30 -> 40
//     Index:  0     1     2     3

}

// Test and Complete the following methods

void printReverse(){

}

void reverse() {
    // Reverse the content of the list

}

void sort(){
    // sort elements of list ( ascending )

}

void clear() {
    // delete all the elements from the list
}

// Also Add following print statement using iteration as well as recursion
void printRearToFront()
void printRearToFrontUsingRecursion()
void printFrontToRearUsingRecursion()
*/


int main() {
    Queue* qu = createQueue();
    qu = addOneEle( qu, 1 );
    printFrontToRear( qu );

    qu = addOneEle( qu, 2 );
    printFrontToRear( qu );

    qu = delOneEle( qu );
    printFrontToRear( qu );

    qu = addOneEle( qu, 3 );
    printFrontToRear( qu );

    return 0;
}
