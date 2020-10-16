def bubbleSort(arr):
    n = len(arr) 
  
    # Traverse through all array elements 
    for i in range(n-1): 
    # range(n) also work but outer loop will repeat one time more than needed. 
  
        # Last i elements are already in place 
        for j in range(0, n-i-1): 
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j]


arr = [100, 75, 25, 150, 10, 45, 32, 99]

bubbleSort(arr)

print("Sorted array is:")
for el in arr:
    print(el, end=" "),
