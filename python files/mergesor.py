'''
def merge(a, b):
	# Space : O(n + m)
	# time: O(n + m)
	n = len(a) # length of the first list
	m = len(b) # length of the second list
	output = [0]*(n+m) # final output list which will be returned
	i, j, k = 0, 0, 0
	while(i < n and j < m):
		if a[i] <= b[j]:
			output[k] = a[i]
			i += 1
			k += 1
		else:
			output[k] = b[j]
			j += 1
			k += 1

	while(j < m):
		# list b is remaining and a is exhausted
		output[k] = b[j]
		j += 1
		k += 1

	while(i < n):
		# list a is remaining and b is exhausted
		output[k] = a[i]
		i += 1
		k += 1

	return output


def merge_sort(arr, left, right):
    k=0
	if(left == right):
		# base case
		k+=1
		print(k)
		return [arr[left]] # or return [arr[right]]

	mid = (left + right) // 2
	left_half = merge_sort(arr, left, mid) # recursively we extracted the left sorted half
	right_half = merge_sort(arr, mid+1, right) # recursively we extracted the right sorted half
	output = merge(left_half, right_half) # merged both the halfs
	
	return output


n=int(input())
li = list(map(int,input().split()))
print("Before sort",li)
output = merge_sort(li, 0, len(li) - 1)
print("After sorting", output)
'''

def merge(a, b):
	i,k,j = 0,0,0
	n = len(a); m = len(b)
	output = [0]*(n+m)
	while i< n and j < m:
		if a[i]<=b[j]:
			output[k]=a[i]
			i+=1
			k+=1
		else :
			output[k]= b[j]
			j+=1
			k+=1
	
	while i<n:
		output[k]=a[i]
		i+=1
		k+=1
	
	while j<m:
		output[k]=b[j]
		j+=1
		k+=1

	return output

def mergesort(arr, l, r):
	if l==r:
		return [arr[l]]
	
	mid = (l+r)//2
	larr = mergesort(arr, l, mid)
	rarr = mergesort(arr, mid+1, r)
	output= merge(larr, rarr)

	return output

li = list(map(int,input().split()))
o = mergesort(li, 0, len(li)-1)
print(*o)
