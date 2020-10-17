
class Node {
    constructor( num ) {
        this.data = num
        this.next = null
    }
}
class LinkedList {
    constructor() {
        this.root = null
        this.size = 0
    }

    add( num ) {
        const newNode = new Node( num )
        newNode.next = this.root
        this.root = newNode
        console.log( "Added:" , this.root.data ) 
        this.size += 1
    }

    delete() {
        console.log( "Deleted:" , this.root.data ) 
        this.root = this.root.next
        this.size -= 1
    }

    elementAt( index ) {
        //      LinkedList: 10 <- 20 <- 30 <- 40
        //      Index:      0     1     2     3
        
        let length = this.size-1
        let temp = this.root

        while( index != length ) {
            temp = temp.next
            length -= 1   
        }

        return temp
    }

    // Add appropriate message when the list is empty
    print() {
        let temp = this.root
        const ele = []
        while( temp != null ) {
            ele.push( temp.data )
            temp = temp.next
        }
        console.log( "LinkedList Values:", ele )
    }

    // Test and Complete the following methods
    printReverse( ) {
    }

    reverse() {
        let prev,next;
        let current = this.root ;
        while(current){ 
            next = current.next
            current.next = prev 
            prev = current 
            current = next
            }
        this.root = prev;
    }
    sort() {
        let current = this.root;  
        let index,temp; 
          
        if(!this.root)  
            return;  
        else{
            while(current){ 
                index = current.next;  
                  
                while(index){ 
                	if(current.data > index.data){  
                        temp = current.data;  
                        current.data = index.data;  
                        index.data = temp; 
                    }
                    index = index.next;
                }
                current = current.next;
            }
            }
    }

    clear() {
        this.root=null;
        this.size=0;
        console.log("Linked List is Cleared");
    }

    contains(value) {
        let temp=this.root;
        while(temp){
        if(temp.data==value){
        	console.log("Linked List contains "+value);
            return;
        }
        temp=temp.next;
        }
        console.log("Linked List doesn't contain "+value);
    }
    
}

ll = new LinkedList()
ll.add( 1 )
ll.print()

ll.add( 2 )
ll.print()

ll.delete()
ll.print()

ll.add(3)
ll.add(4)
ll.add(2)
ll.print()

ind = 1 
node = ll.elementAt( ind )
console.log( "Element at index" , ind , ":" , node.data ) 

ll.contains(3)

ll.reverse();
console.log("After reversing element");
ll.print();

ll.sort();
console.log("After sorting element");
ll.print();

ll.clear();
