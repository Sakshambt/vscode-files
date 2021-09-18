#n=input()
n=int(input())
n=str(n)
l=len(n)
n=int(n)
i=n
sum=0
while n>0:
    r=n%10
    sum=sum+r**l
    n=n//10
if sum==i:
    print("yes")
else:
    print("no")
