#include<iostream>
using namespace std ;

int largestOfTwo( int num1, int num2 ) {
    if( num1 > num2 )
        return num1;
    return num2;
}

int largestOfThree( int num1, int num2, int num3 ) {
    return largestOfTwo( largestOfTwo( num1, num2), num3 );
}
int largestOfFour(int num1,int num2,int num3,int num4){
    return largestOfThree(largestOfTwo( num1, num2) ,num3, num4);
}
int largestOfFive(int num1,int num2,int num3,int num4,int num5 ){
    return largestOfFour(largestOfTwo(num1,num2),num3,num4,num5);
}
int main() {

    int n1 = 50;
    int n2 = 400;
    int n3 = -10;
    int n4 = 500;
    int n5 = -50;

    cout << "Largest among n1, n2 : " << largestOfTwo( n1, n2 ) ;

    /* Please create below functions to find the largest among the numbers */

    cout << "\nLargest among n1, n2, n3 : " << largestOfThree( n1, n2, n3 )<<endl ;
    cout << "Largest among n1, n2, n3, n4 : " << largestOfFour( n1, n2, n3, n4 )<<endl ;
    cout << "Largest among n1, n2, n3, n4, n5 : " << largestOfFive( n1, n2, n3, n4, n5 )<<endl ;
    return 0;
    
}