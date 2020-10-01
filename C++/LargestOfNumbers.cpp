#include <iostream>
using namespace std;

int largestOfTwo( int num1 , int num2 ) {
    if(num1>num2)
        return num1;
    else if(num2>num1)
        return num2;
    else if(num1==num2)
        return num1;

}

int largestOfThree( int num1, int num2, int num3 ) {
   if (num1 > num2 && num1> num3)
        return num1;
   else if(num2>num1 && num2> num3)
        return num2;
   else if(num1==num2||num1==num3)
        return num1;
   else if (num2==num3)
     return num2;
   else
    return num3;

}
int largestOffour( int num1, int num2, int num3, int num4 ) {
   if (num1 > num2 && num1> num3 && num1>num4 )
        return num1;
else if(num2>num1 && num2> num3 && num2>num4)
        return num2;
    else if(num3>num2 && num3>num4)
         return num3;
    else if(num1==num2||num1==num3|| num1==num4)
         return num1;
     else if (num2==num3||num2==num4)
         return num2;
   else if(num3==num4)
         return num3;
    else
        return num4;
}
int largestOffive( int num1, int num2, int num3, int num4,int num5 ) {
   if (num1 > num2 && num1> num3 && num1>num4 &&num1>num5 )
        return num1;
   else if(num2>num1 && num2> num3 && num2>num4 && num2>num5)
        return num2;
    else if(num3>num2 && num3>num4 && num3>num5)
        return num3;
     else if(num4>num5)
        return num4;
   else if(num1=num2||num1==num3|| num1==num4 || num1==num5)
        return num1;
   else if (num2==num3||num2==num4 ||num2==num5)
     return num2;
   else if(num3=num4||num3==num5)
    return num3;
    else if(num4==num5)
        return num4;
    else return num5;
}


int main() {

    int n1 = 50;
    int n2 = 400;
    int n3 = -10;
    int n4 = 500;
    int n5 = -50;

    cout << "Largest among n1, n2 : " << largestOfTwo( n1, n2 ) <<endl;
    cout << "Largest among n1, n2, n3 : " << largestOfThree( n1, n2, n3 )<<endl ;
    cout << "Largest among n1, n2, n3, n4 : " << largestOffour( n1, n2, n3, n4 ) <<endl;
    cout << "Largest among n1, n2, n3, n4, n5 : " << largestOffive( n1, n2, n3, n4, n5 ) <<endl;

}
