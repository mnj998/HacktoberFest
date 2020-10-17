package Java;

import java.util.Scanner;


public class Fibonacci {
    static void fibUsingLoop( int n ) {

        // Solve the bugs if there are any 

        int first = 0; 
        int second = 1;
        int third = first + second ;
    
        for (int i = 0; i < n; i++) {
        
            System.out.print( first + " ") ;

            first = second ;
            second = third ;
            third = first + second ;

        }   
    
    }
    static int fibUsingRecursion( int n){
    if (n<0){ 
        System.out.print("Incorrect input") ;
        return -1;
    }
    else if(n==0) 
        return 0;
    else if (n==1)
        return 1;
    return fibUsingRecursion(n-1)+fibUsingRecursion(n-2); 
    }
    
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        System.out.println("How many numbers from fib series? : ");
        
        int n = in.nextInt();

        fibUsingLoop(n) ;
        fibUsingRecursion(n) ;

        in.close();
        
    }


}
