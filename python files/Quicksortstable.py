def lessthan(x, y):
    return x[0] < y[0]
 
# complete this function
# the return value is wrong, you are to complete this function so that the return value is correct
# arr is a list of tuples where each tuple contains the pair (x, y)
def choose_pivot(arr):
    a=dict()
    pivot=[]
    i=0
    while(i < len(arr)):
        if arr[i][0] not in a:
            a[arr[i][0]] = i
            pivot.append(i)
        i+=1

    return(pivot)
 
# ---------------------------- Do not modify code below this line ------------------------------------
n = int(input())
arr_strip = list(map(int, input().split()))
arr = []
for i in range(0, 2*n, 2):
    arr.append((arr_strip[i], arr_strip[i+1]))
 
candidates = choose_pivot(arr)
 
print(len(candidates))
print(*candidates)