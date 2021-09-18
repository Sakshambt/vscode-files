li=list(map(int,input().split()))
for i in range(len(li)):
    swapped=False
    for j in range(len(li)-i-1):
        if li[j+1]<li[j]:
            li[j],li[j+1]=li[j+1],li[j]
            swapped=True
    if not swapped:
        break
print(li)