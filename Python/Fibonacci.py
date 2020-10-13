# Solve the bugs if there are any
def fibUsingLoop(n):

    if n<0: 
        print("Incorrect input") 
    elif n==0: 
        return 0 
    elif n==1: 
        return 1
    else: 
        return Fibonacci(n-1)+Fibonacci(n-2)


n = input("How many numbers from fib series? : ")

fibUsingLoop(n)

# Write a function to print fibonacci series using recursion
# fibUsingRecursion(n) ;
#complete the code
