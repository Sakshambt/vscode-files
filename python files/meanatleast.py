n=int(input())
d-int(input())
li=list(map(int,input().split()))
l=0
r=n-1
max=li[0]
while r>=l:
    mid=l+(r-l)//2
    if li[mid]>max:
        max=li[mid]

