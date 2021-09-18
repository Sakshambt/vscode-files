import random
 
def lessthan(x, y):
    return x < y
 
def quick_sort(arr, l, r):
    if r <= l:
        return
    # select a pivot uniformly randomly from [l, r]
    pivot = arr[random.randint(l, r)]
 
    # partition_index = first index that is greater than or equal to pivot among the integers read so far
    partition_index = l
 
    for index in range(l, r+1):
        if lessthan(arr[index], pivot):
            # swap arr[index] to the beginning of the array
            arr[index], arr[partition_index] = arr[partition_index], arr[index]
 
            # increase partition size, more number of elements less than pivot found
            partition_index += 1
 
    arr[partition_index], arr[r] = arr[r], arr[partition_index]
    quick_sort(arr, l, partition_index - 1)
    quick_sort(arr, partition_index+1, r)
    print(partition_index)
 
# using the function
arr = [3,5,2,5,3,2]
quick_sort(arr, 0, len(arr)-1)
print(arr)