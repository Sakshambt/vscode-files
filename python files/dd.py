'''
t=int(input())
while(t>0):
    t-=1
    n=int(input())
    l= map (int , input().split(" "))
    i=1
    sum=l[0]
    while(i<n-1):
        sum=sum*l[i]
        i+=1
    sum=sum%1234567
    print(sum)

s={"Sa","Sa",1,1,12,23,12}
s.add(45)
print(s)
s.remove(1)
print(s)
print(23 in s)
print(len(s))

print("2")
arr=[]
sum=0;sum1=0;pr=1
n=int(input())
for i in range(0,n):
    x=int(input())
    arr.append(x)
for i in range(1,n):
    sum= sum + arr[i-1]
    pr = arr[i] * sum
    sum1+=pr
print(sum1)
'''
# cook your dish here
'''print("2")
n=int(input())
arr=[]
ans=1
u=int(input())
arr.append(u)
for i in range(1,n):
    x=int(input())
    arr.append(x)
    if u<x:
        ans+=1
        u=x
        print(u)
print(ans)

'''
def out(n):
    if n==1:
        print("1")
        return
    out(n-1)
    print(n)



n= int (input())
out(n)