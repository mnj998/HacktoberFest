// write a program to print following pattern
// Input : 5
// Output: 
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
[5:15 PM, 10/25/2020] Gaana🖤: Ashwinnnn
[5:15 PM, 10/25/2020] Gaana🖤: #include <iostream>
using namespace std; 
int main()
{
    int i, j, n;
    cin >> n;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  // upper left triangle
                cout << "*";
            else
                cout << " ";
            if((i + n) <= j)  // upper right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // bottom left triangle
                cout << "*";
            else
                cout << " ";
            if(i >= (2 * n - 1) - j)  // bottom right triangle
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
