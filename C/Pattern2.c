
// Input : 5
// Output: 
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
#include<stdio.h> 
pattern(int n) 
{ 
    int i,j; 
      
    // This is upper half of pattern 
    for (i=1; i<=n; i++) 
    { 
        for (j=1; j<=(2*n); j++) 
        { 
            // Left part of pattern 
            if (i<j) 
                printf(" "); 
            else
                printf("*"); 
              
            // Right part of pattern 
            if (i<=((2*n)-j)) 
                printf(" "); 
            else
                printf("*"); 
        } 
        printf("\n"); 
    } 
      
    // This is lower half of pattern 
    for (i=1; i<=n; i++) 
    { 
        for (j=1;j<=(2*n);j++) 
        { 
            // Left part of pattern 
            if (i>(n-j+1)) 
                printf(" "); 
            else
                printf("*"); 
                  
            // Right part of pattern 
            if ((i+n)>j) 
                printf(" "); 
            else
                printf("*"); 
        } 
        printf("\n"); 
    } 
} 
  
// main function 
int main() 
{ 
    int n;
scanf("%d",&n);
pattern(n);
return 0;
 
}
