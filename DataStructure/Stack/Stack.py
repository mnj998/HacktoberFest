# Note:

# Keep the usage of in-built function to the minimum
# addOneEle/Optimize  features
# Please follow best coding practices
# addOneEle comments if necessary
# And make the Code Bug free

# Python program for implementation of stack 

# import maxsize from sys module 
from sys import maxsize 

# Function to create a stack. It initializes size of stack as 0 
def createStack(): 
	stack = [] 
	return stack 

# Stack is empty when stack size is 0 
def isEmpty(stack): 
	return len(stack) == 0

# Function to add an item to stack. It increases size by 1 
def push(stack, item): 
	stack.append(item) 
	print("Pushed: "+item) 
	
# Function to remove an item from stack. It decreases size by 1 
def pop(stack): 
	if (isEmpty(stack)): 
		return str(-maxsize -1) # return minus infinite 
	
	return stack.pop() 

# Function to return the top from stack without removing it 
def peek(stack): 
	if (isEmpty(stack)): 
		return str(-maxsize -1) # return minus infinite 
	return stack[len(stack) - 1] 

#Function to print the stack
def print_stack(stack):
    print("Stack: ", end="")
    for i in range(0,len(stack)):
        print(stack[len(stack) - i-1], end=" ")
    print()


#Program to test above functions	 
stack = createStack() 
print_stack(stack)
push(stack, str(10))
print_stack(stack) 
push(stack, str(20))
print_stack(stack)
print("Popped: "+pop(stack)) 
print_stack(stack)


# Please refer Stack.cpp program and code in python
