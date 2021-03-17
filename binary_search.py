def binarySearch (arr, l, r, x): 
  
    # Check base case 
    if r >= l: 
  
        mid = l + (r - l) // 2
  
        # If element is present at the middle itself 
        if arr[mid] == x: 
            return mid 
          
        # If element is smaller than mid, then it  
        # can only be present in left subarray 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
  
        # Else the element can only be present  
        # in right subarray 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
  
    else: 
        # Element is not present in the array 
        return l
  
# Driver Code 
arr = [0,1,2,3,4]
x = 1.5
  
# Function call 
result = binarySearch(arr, 0, len(arr)-1, x)
if(arr[result]<x or arr[result]==x):
    print(result+1)
    print("true")
else:
    print(result)
    print("false")
