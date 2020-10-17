def fibUsingLoop(n):

    first = 0
    second = 1
    third = first + second

    for i in range(n):
        print(first)

        first = second
        second = third
        third = first + second

def fibUsingRecursion(n):

   if n<0: 
        print("Incorrect input") 
   elif n==0: 
        return 0
   elif n==1: 
        return 1
   else: 
        return fibUsingRecursion(n-1)+fibUsingRecursion(n-2)
n = int(input("How many numbers from fib series? : "))

fibUsingLoop(n)
print(fibUsingRecursion(n)) 


