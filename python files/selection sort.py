li=list(map(int,input().split()))
b=0
k=[]
min = li[0]
for i in range(len(li)):
    c=i
    for j in range(i+1,len(li)):
        if li[j]<li[c]:
            c=j
    if i!= c:
        li[i],li[c]=li[c],li[i]
        
        stri=str(i)+" "+str(c)
        k.append(stri)
        b+=1
   
print(b)
for i in range(len(k)):
    print(k[i])
