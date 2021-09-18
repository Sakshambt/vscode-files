n=int(input())
arr=list(map(int,input().split(" ")))
c=0
for i in range(0,n):
    if arr[i]!=0:
        arr[c]=arr[i]
        c+=1
while c<n:
    arr[c]=0
    c+=1
print(arr)