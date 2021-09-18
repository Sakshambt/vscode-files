li = list(map(int,input().split()))
for i in range(1,len(li)):
    c=i
    for j in range(i-1,-1,-1):
        if (li[c]<li[j]):
            li[j],li[c]=li[c],li[j]
            c-=1
        else:
            break
print(li)