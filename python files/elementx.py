
def binary_search(arr,x):
	# first of all we will define the search space
	n = len(arr)
	left, right = 0, n-1 # boundaries of the search space
	while(left <= right):
		mid = (left + right) // 2
		if arr[mid] >=x:
			return mid
		elif arr[mid] > target:
			right = mid - 1
		else:
			left = mid + 1

	return -1




x=int(input())
arr=list(map(int,input().split()))
print(binary_search(arr,x))