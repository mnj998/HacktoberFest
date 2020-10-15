/*
Note:

Keep the usage of in-built function to the minimum
addOneEle/Optimize  features
Please follow best coding practices
addOneEle comments if necessary
And make the Code Bug free

*/

// Stack class 
class Stack { 

	// Array is used to implement stack 
	constructor() 
	{ 
		this.items = []; 
	} 

// push function 
push(element) 
{ 
	// push element into the items 
    this.items.push(element); 
    console.log("Pushed: ",element);
} 

// pop function 
pop() 
{ 
	// return top most element in the stack 
	if (this.items.length == 0) 
        return "Underflow"; 
	return this.items.pop(); 
} 

// isEmpty function 
isEmpty() 
{ 
	// return true if stack is empty 
	return this.items.length == 0; 
} 

// printStack function 
printStack() 
{ 
    console.log("Stack: ");
	var str = ""; 
	for (var i = this.items.length-1; i >= 0; i--) 
		str += this.items[i] + " "; 
	return str; 
} 
}

// creating object for stack class 
var stack = new Stack(); 

// Adding element to the stack 
console.log(stack.printStack());
stack.push(10); 
console.log(stack.printStack());
stack.push(20); 
console.log(stack.printStack());
console.log("Popped: ",stack.pop()); 
console.log(stack.printStack());




//Please refer Stack.cpp program and code in js
