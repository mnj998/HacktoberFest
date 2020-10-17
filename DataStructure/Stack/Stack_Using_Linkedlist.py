class Node: 

	# Class to create nodes of linked list 
	# constructor initializes node automatically 
	def __init__(self,data): 
		self.data = data 
		self.next = None

class Stack: 

	# head is default NULL 
	def __init__(self): 
		self.head = None

	# Checks if stack is empty 
	def isempty(self): 
		if self.head == None: 
			return True
		else: 
			return False

	# Method to add data to the stack 
	def push(self,data): 

		if self.head == None: 
			self.head=Node(data) 

		else: 
			newnode = Node(data) 
			newnode.next = self.head 
			self.head = newnode 

	# Remove element that is the current head 
	def pop(self): 

		if self.isempty(): 
			return None

		else: 
			# Removes the head node and makes 
			#the preceeding one the new head 
			poppednode = self.head 
			self.head = self.head.next
			poppednode.next = None
			return poppednode.data 

	# Returns the head node data 
	def peek(self): 

		if self.isempty(): 
			return None

		else: 
			return self.head.data 

	# Prints out the stack	 
	def display(self): 

		iternode = self.head 
		if self.isempty(): 
			print("Stack Underflow") 

		else: 

			while(iternode != None): 

				print(iternode.data,"->",end = " ") 
				iternode = iternode.next
			return

# Driver code 
MyStack = Stack() 


# Please refer Stack.cpp program and code in python 	MyStack.push(11) 
MyStack.push(22) 
MyStack.push(33) 
MyStack.push(44) 

# Display stack elements 
MyStack.display()   #44->33->22->11->

# Print top element of stack 
print("\nTop element is ",MyStack.peek())    #44

# Delete top elements of stack 
MyStack.pop() 
MyStack.pop() 

# Display stack elements 
MyStack.display()  #22->11->

# Print top element of stack 
print("\nTop element is ", MyStack.peek())  #22
