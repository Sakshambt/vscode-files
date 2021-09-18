n=int(input())
cum_sum=0
li=[]
sumli=[]
sumli.append(0)
for i in range(0,n):
    x=int(input())
    li.append(x)
    cum_sum+=x
    sumli.append(cum_sum)

print("no.of test cases: ")
t=int(input())
while t>0:
    t-=1
    sum=0
    l,r=input().split(" ")
    l=int(l)
    r=int(r)
    sum=sumli[r+1]-sumli[l]
    print(sum)