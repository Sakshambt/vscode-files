n = int(input())
li= list(map(int,input().split()))
li.sort()
ent={}
for i in li:
    if ent[i]!=0:
        ent[i]+=1
    else:
        ent[i]=1

print(ent)
k=0
while n!=1:
    for i in range(0,n-1,2):
        if li[i]!=li[i+1]:
            k+=1
 
    for j in range(1,(n//2)+1,1):
        li.pop(j)

    n=len(li)

print(k)

k=merge_sort(li,0,n-1)
print(k)


