def pattern(n):
    if n==1:
        return 1

    v=pattern(n-1)
    if v%2==0:
        print(v,end=" ")
    else:
        print((v+1)*5,end=" ")
    return v+1

n=int(input())
pattern(n+1)

