#include<iostream>
using namespace std ;

int fibUsingLoop( int n ) {

    // Solve the bugs 

    int first = 0; 
    int second = 1;
    int third = first + second ;
    
    for (int i = 0; i < n; i++) {
        
        cout << first << " " ;

        first = second ;
        second = third ;
        third = first + second ;

    }
    
}
int fibUsingRecursion(int x ){
    if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibUsingRecursion(x-1)+fibUsingRecursion(x-2));
   }
}

int main() {

    int n ,i=0;

    cout << "How many numbers from fib series? : ";
    cin >> n ;

    cout<<"fibonacci using loop = "<<fibUsingLoop(n)<<endl ;
    cout<<"fibonacci using recursion = ";
    while(i <=n) {
      cout << " " << fibUsingRecursion(i);
      i++;
    }
    return 0;
}
