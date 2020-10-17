# Note:

# Keep the usage of in-built function to the minimum
# addOneEle/Optimize  features
# Please follow best coding practices
# addOneEle comments if necessary
# And make the Code Bug free


class Node: 
	
	def __init__(self, data): 
		self.data = data 
		self.next = None

# A class to represent a queue 

# The queue, front stores the front node 
# of LL and rear stores the last node of LL 
class Queue: 
	
	def __init__(self): 
		self.front = self.rear = None

	def isEmpty(self): 
		return self.front == None
	
	# Method to add an item to the queue 
	def EnQueue(self, item): 
		temp = Node(item) 
		
		if self.rear == None: 
			self.front = self.rear = temp 
			return
		self.rear.next = temp 
		self.rear = temp 

	# Method to remove an item from queue 
	def DeQueue(self): 
		
		if self.isEmpty(): 
			return
		temp = self.front 
		self.front = temp.next

		if(self.front == None): 
			self.rear = None

# Driver Code 
if __name__== '__main__': 
	q = Queue() 
	q.EnQueue(10)  #10
	q.EnQueue(20)  #10 20
	q.DeQueue()    #20
	q.DeQueue()    #
	q.EnQueue(30)   #30
	q.EnQueue(40)   #30 40
	q.EnQueue(50)   #30 40 50
	q.DeQueue()     #40 50
	print("Queue Front " + str(q.front.data)) 
	print("Queue Rear " + str(q.rear.data)) 
	
