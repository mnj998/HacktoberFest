package Algorithms.BinarySearch;

class BinarySearch { 
	int IterativeBinarySearch(int arr[], int x) 
	{ 
		int l = 0, r = arr.length - 1; 
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
		 //Restrict the boundary of right index 
        // and the left index to prevent 
        // overflow of indices. 
        if (r >= l && l<arr.length-1) { 
           
            int mid = l + (r - l) / 2;
 
            // If the element is present 
            // at the middle itself
            if (arr[mid] == x)
                return mid;
 
            // If element is smaller than mid, then it can only
            // be present in left subarray
            if (arr[mid] > x)
                return binarySearch(arr, l, mid - 1, x);
 
            // Else the element can only be present in right
            // subarray
            return binarySearch(arr, mid + 1, r, x);
        }
 
        // We reach here when element is not present in array
        return -1;
    }

	public static void main(String args[]) 
	{ 
		BinarySearch ob = new BinarySearch(); 
		int arr[] = { 2, 3, 4, 10, 40 }; 
		int n = arr.length; 
		int x = 10; 
        int y = 5;
		int result1 = ob.IterativeBinarySearch(arr, x); 
		int result2 = ob.RecursiveBinarySearch(arr, 0, n - 1, y); 
		if (result1 == -1) 
			System.out.println("Element not present"); 
		else
			System.out.println("Element found at "
							+ "index " + result1); 
        if (result2 == -1) 
			System.out.println("Element not present"); 
		else
			System.out.println("Element found at "
							+ "index " + result2); 
	} 
} 
