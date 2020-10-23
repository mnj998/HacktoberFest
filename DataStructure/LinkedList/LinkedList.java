package DataStructure.LinkedList;
/*
Note: 

Keep the usage of in-built function to the minimum
Add/Optimize  features
Please follow best coding practices
Add comments if necessary
And make the Code Bug free

*/

class Node {
    int data;
    Node next;
    Node( int n ) {
        data = n;
        next = null;
    }
}

public class LinkedList {
    
    int size;
    Node root;

    LinkedList(){
        root = null;
        size = 0;
    }

    void add( int num ) {
        Node newNode = new Node( num );
        newNode.next = root;
        root = newNode;
        System.out.println( "Added: " + root.data ) ;
        size++;
    }

    // Add appropriate message when the list is empty
    void del() {
        System.out.println( "Deleted: " + root.data ) ;
        root = root.next;
        size--;
    }

    Node elementAt( int index ) {
    //     LinkedList: 10 <- 20 <- 30 <- 40
    //     Index:      0     1     2     3
    
        int len = size-1;
        Node temp = root;

        while( index != len ) {
            temp = temp.next;
            len--;   
        }

        return temp;

    }

    void print() {
        Node temp = root;
        System.out.print( "LinkedList Values: " );
        while( temp != null ) {
            System.out.print( temp.data + " " );
            temp = temp.next;
        }
        System.out.println() ;
    }

    // Test and Complete the following methods

    
    void printReverse(){
    System.out.print("\nreverse linked list::");
    	int len=0;
    	Node t;
    	while(len<=size-1) {
//    	if(this.elementAt(len) != null ) {
    		t=this.elementAt(len);  
    		System.out.print(t.data+" ");
    		
//    	}
    	len++;}
    
    }
    }
/*
    void reverse() {
        // Reverse the content of the list

    }

    void sort(){
        // sort elements of list ( ascending )

    }

    void clear() {
        // Delete all the elements from the list
    }

    bool contains( int value ) {
        // To check if element exist
    }

    */
    public static void main(String[] args) {

        LinkedList ll = new LinkedList();
        ll.add( 1 );
        ll.print();
    
        ll.add( 2 );
        ll.print();
        
        ll.del();
        ll.print();
    
        ll.add(3);
        ll.print();
        
        int ind = 1 ;
        Node node = ll.elementAt( ind );
        System.out.println( "Element at index " + ind + ": " + node.data );       
        
        ll.add(4);
        ll.print();
        ll.printReverse();

    }

}
