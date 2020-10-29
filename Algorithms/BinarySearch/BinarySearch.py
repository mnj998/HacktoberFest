def IterativeBinarySearch(arr, l, r, x):

    while l <= r:

        mid = l + (r - l) // 2

        # Check if x is present at mid
        if arr[mid] == x:
            return mid

        # If x is greater, ignore left half
        elif arr[mid] < x:
            l = mid + 1

        # If x is smaller, ignore right half
        else:
            r = mid - 1

    # If we reach here, then the element
    # was not present
    return -1


def RecursiveBinarySearch(arr, l, r, x):
    # write the code to implement Recursive BinarySearch
    # Check base case 
    if high >= low: 
  
        mid = (high + low) // 2
  
        # If element is present at the middle itself 
        if arr[mid] == x: 
            return mid 
  
        # If element is smaller than mid, then it can only 
        # be present in left subarray 
        elif arr[mid] > x: 
            return binary_search(arr, low, mid - 1, x) 
  
        # Else the element can only be present in right subarray 
        else: 
            return binary_search(arr, mid + 1, high, x) 
  
    else: 
        # Element is not present in the array 
        return -1


arr = [2, 3, 4, 10, 40]
x = 10
y = 5

# Function call
result1 = IterativeBinarySearch(arr, 0, len(arr)-1, x)
result2 = RecursiveBinarySearch(arr, 0, len(arr)-1, y)

if result1 != -1:
    print("Element is present at index % d" % result1)
else:
    print("Element is not present in array")
if result2 != -1:
    print("Element is present at index % d" % result2)
else:
    print("Element is not present in array")
