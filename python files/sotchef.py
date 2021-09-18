def chefs_sort_function(arr):
    answer = []
    min_value = arr[0]
    # obtain the minimum value by iterating through the array
    for x in arr:
        if min_value > x:
            min_value = x
    
    done = False
    # minimum value must be the first element in the sorted array
    answer.append(min_value)
    while not done:
        # find the next value to be inserted
        next_value = 0
        done = True
        for x in arr:
            # if x <= min_value then it has been already inserted to answer so ignore them
            if x > min_value:
                if done:
                    # If done is true then this is the first value in the array "arr" not yet in answer
                    next_value = x
                    # set done to False
                    done = False
                elif x < next_value:
                    next_value = x
        # next_value is the smallest value that is not yet added to the array "answer"
        if not done:
            answer.append(next_value)
        # update min_value for the next iteration
        min_value = next_value
    return answer
 
 
n = int(input())
arr = list(map(int, input().split()))
sorted_arr = chefs_sort_function(arr)
 
for x in sorted_arr:
    print(x, ' ')

arr.sort()
print(arr)