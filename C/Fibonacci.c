#include<stdio.h>

void fibUsingLoop( int n ) {

    // Solve the bugs if there are any 

    int first = 0; 
    int second = 1;
    int third = first + second ;
    
    for (int i = 0; i < n; i++) {
        
        printf( "%d ", first ) ;

        first = second ;
        second = third ;
        third = first + second ;

    }
    
}
int fibUsingRecursion(int n)
{
  if(n<0){
     printf("incorrect answer:");
     return -1;
  }
 else if(n==0){

    return 0;
  }
  else if(n==1){
   return 1;
  }
  else{
    return fibUsingRecursion(n-1)+fibUsingRecursion(n-2);
  }
  
}

void main() {

    int n ;

    printf("How many numbers from fib series? : ");
    scanf("%d", &n );

    fibUsingLoop(n) ;
    printf("%d", fibUsingRecursion(n)) ;


   

    
}
