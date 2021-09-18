li = list(map(int,input().split()))
n = len(li)
for i in range(0, 1<<n):
    for j in range(0,n):
        if i & (1<<j):
            print(li[j],end=" ")
    print()
