
// complete the Program to Swap Elements Using Call by Reference
-------
#include <stdio.h>
void cyclicSwap(int *a, int *b, int *c);
int main() {
    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

}

void cyclicSwap(int *n1, int *n3) {
    int temp;
    // swapping in cyclic order
    *n1 = *n3;
    *n3 = temp;
}