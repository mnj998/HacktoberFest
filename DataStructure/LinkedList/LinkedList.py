class Node:
    def __init__( self, num ):
        self.data = num
        self.next = None

class LinkedList:
    def __init__( self ):
        self.root = None
        self.size = 0

    def add( self, num ):
        newNode = Node( num )
        newNode.next = self.root
        self.root = newNode
        print( "Added:" , self.root.data ) 
        self.size += 1

    # Add appropriate message when the list is empty
    def delete( self ):
        print( "Deleted:" , self.root.data ) 
        self.root = self.root.next
        self.size -= 1

    def elementAt( self, index ):
    #     LinkedList: 10 <- 20 <- 30 <- 40
    #     Index:      0     1     2     3
    
        length = self.size-1
        temp = self.root

        while( index != length ):
            temp = temp.next
            length -= 1   

        return temp

    def print( self ) :
        if(self.root!=None):
            temp = self.root
            print( "LinkedList Values: ", end="" )
            while( temp != None ):
                print( temp.data , end=" ")
                temp = temp.next
            print()
        else:
            print("Linked List is cleared")

    # Test and Complete the following methods

    
    def printReverse( self ):
        pass

    def reverse( self ): 
        # Reverse the content of the list
        pass
    def sort( self ):
        # sort elements of list ( ascending )
        pass

    def clear( self ) :
        self.root=None
        self.size=0

    def contains( self, value ) :
        # To check if element exist
        pass

ll = LinkedList()
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
print( "Element at index" , ind , ":" , node.data )

ll.clear()
ll.print()
