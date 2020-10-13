
#include <stdio.h>


int IterativeBinarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// if we reach here, then element was
	// not present
	return -1;
}

int RecursiveBinarySearch(int arr[], int l, int r, int x)
{
//write the code to implement Recursive BinarySearch
if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return RecursiveBinarySearch(arr, l, mid-1, x);
        return RecursiveBinarySearch(arr, mid+1, r, x);
   }
   return -1;
}


int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
    int y = 5;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result1 = IterativeBinarySearch(arr, 0, n - 1, x);
	int result2 = RecursiveBinarySearch(arr, 0, n - 1, y);
	(result1 == -1) ? printf("Element is not present in array")
				: printf("Element is present at index %d ", result1);
    (result2 == -1) ? printf("\nElement is not present in array")
				: printf("\nElement is present at index %d ", result2);
	return 0;
}
