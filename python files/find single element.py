li=list(map(int,input().split(" ")))
x=li[0]
for i in range(1,len(li)):
    x=x^li[i]
print(x)