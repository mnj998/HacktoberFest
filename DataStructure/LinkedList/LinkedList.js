// Note: 

// Keep the usage of in-built function to the minimum
// Add/Optimize  features
// Please follow best coding practices
// Add comments if necessary
// And make the Code Bug free


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
        const temp = this.root

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
        // Reverse the content of the list
    }
    sort() {
        // sort elements of list ( ascending )
    }

    clear() {
        // Delete all the elements from the list
    }

    contains() {
        // To check if element exist
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
ll.print()

ind = 1 
node = ll.elementAt( ind )
console.log( "Element at index" , ind , ":" , node.data )       
