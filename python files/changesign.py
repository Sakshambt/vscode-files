for _ in range(int(input())):
    n= int(input())
    li = list(map(int,input().split()))
    c=0
    for i in range(1,n):
        if li[i]>0 and li[i-1]<0 or li[i]<0 and li[i-1]>0:
            c+=1
    print(c)