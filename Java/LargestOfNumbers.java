package Java;

public class LargestOfNumbers {
    static int largestOfTwo( int num1, int num2 ) {
        if( num1 > num2 )
            return num1;
        return num2;
    }

    static int largestOfThree( int num1, int num2, int num3) {
        // Complete the function
        int temp=num1>num2?num1:num2;
        int result=num3>temp?num3:temp;
        
        
        return result;
    }



    public static void main(String[] args) {

        int n1 = 50;
        int n2 = 400;
        int n3 = -10;
        int n4 = 500;
        int n5 = -50;

        System.out.println( "Largest among n1, n2 : "+largestOfTwo( n1, n2 ) ) ;

        /* Please create below functions to find the largest among the numbers */

         System.out.println( "Largest among n1, n2, n3 : "+largestOfThree( n1, n2, n3 ) ) ;
        // System.out.println( "Largest among n1, n2, n3, n4 : "+largestOfFour( n1, n2, n3, n4 ) ) ;
        // System.out.println( "Largest among n1, n2, n3, n4, n5 : "+largestOfFive( n1, n2, n3, n4, n5 ) ) ;
        
    }

}
