def good(x, arr, k):
    sum = 0
    for i in range(0, len(arr)):
        sum+=arr[i]//2
    return sum>=k


n, k =[int(x) for x in input().split()]
arr=list(map(int,input().split()))
l, r = 0, 100
for i in range(0,200):
    m=(l+r)/2
    if good (m, arr, k)== True:
        l=m
    else:
        r=m
print("%0.6f"%l)
#print("\U+1F914")