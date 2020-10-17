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


    
    def printReverse( self ):
        node = self.root
        values = []
        while node:
            values.append(node.data)
            node = node.next

        for value in reversed(values):
            print(value, end=" ")
        print()


    def reverse( self ): 
        prev = None
        current = self.root 
        while(current is not None): 
            next = current.next
            current.next = prev 
            prev = current 
            current = next
        self.root = prev
    def sort( self ):
        current = self.root;  
        index = None;  
          
        if(self.root == None):  
            return;  
        else:  
            while(current != None):  
                #Node index will point to node next to current  
                index = current.next;  
                  
                while(index != None):  
                    #If current node's data is greater than index's node data, swap the data between them  
                    if(current.data > index.data):  
                        temp = current.data;  
                        current.data = index.data;  
                        index.data = temp;  
                    index = index.next;  
                current = current.next;  

    def clear( self ) :
        self.root=None
        self.size=0

    def contains( self, value ) :
        temp = self.root
        while( temp != None ):
            if(temp.data==value):
                print(value,"exist in linked list")
                return
            temp=temp.next
        print(value,"Not exist in linked list")
        

ll = LinkedList()
ll.add( 1 )
ll.print()

ll.add( 2 )
ll.print()

ll.delete()
ll.print()

ll.add(3)
ll.add(7)
ll.add(5)
ll.add(9)
ll.print()

ind = 1 
node = ll.elementAt( ind )
print( "Element at index" , ind , ":" , node.data )

print("linked list printing in reverse order: ",end="")
ll.printReverse()

ll.contains(15)
ll.contains(7)

ll.sort()
print("after sorting the elements in linked list")
ll.print()

ll.reverse()
print("Aftrer reversing the elements in linked list")
ll.print()
ll.clear()
print("After clearing elements in linked list")
ll.print()
