#include<iostream>
using namespace std ;

int largestOfTwo( int num1, int num2 ) {
    if( num1 > num2 )
        return num1;
    return num2;
}

void largestOfThree( int n1, int n2, int n3 ) {
     if((n1 >= n2) && (n1 >= n3))
        cout << n1<<endl;
    else if ((n2 >= n1) && (n2 >= n3))
        cout<< n2<<endl;
    else
        cout<< n3<<endl;
}

int main() {

    int n1 = 50;
    int n2 = 400;
    int n3 = -10;
    int n4 = 500;
    int n5 = -50;

    cout << "Largest among n1, n2 : " << largestOfTwo( n1, n2 )<<endl ;

    /* Please create below functions to find the largest among the numbers */

    cout << "\nLargest among n1, n2, n3 : " ;
    largestOfThree( n1, n2, n3 ) ;
    // cout << "Largest among n1, n2, n3, n4 : " << largestOfFour( n1, n2, n3, n4 ) ;
    // cout << "Largest among n1, n2, n3, n4, n5 : " << largestOfFive( n1, n2, n3, n4, n5 ) ;
    return 0;
    
}
