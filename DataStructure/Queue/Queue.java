/*
Note:

Keep the usage of in-built function to the minimum
addOneEle/Optimize  features
Please follow best coding practices
addOneEle comments if necessary
And make the Code Bug free

*/
package git;

public class queue {
int front=0,size=0,rear=0,capacity;
 int a[];
 queue(int capacity){
	 this.capacity=capacity;
	 rear=capacity-1;
	this.a=new int[capacity];
 }
void add(int item) {
	if(isFull())
		return;
	rear=(rear+1)%capacity;
	a[rear]=item;
	size=size+1;
	System.out.println(item+" added to queue ");
}
void delete() {
	if(isEmpty())
		return ;
	int item=a[front];
	front=(front+1)%capacity;
	
	System.out.println(item+" deleted from the queue");
	System.out.println("New queue head is  "+a[front]);
	
}
boolean isFull() {
	return(size==capacity);
	}
boolean isEmpty() {
	return (size==0);}

void traverseQueue() {
	System.out.print("\nHere is your queue:: ");
		for(int i=front;i<=rear;i++) {
			System.out.print(a[i]+ " ");
		}
		System.out.println("\nqueue head is:: "+a[front]);
		System.out.println("queue tail is:: "+a[rear]+"\n");
		
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		queue q=new queue(1000);
q.add(10);
q.add(20);
q.add(30);
q.add(40);
q.traverseQueue();
q.delete();
q.traverseQueue();
}
}



//Please refer Queue.cpp or Queue.c program and code in java
