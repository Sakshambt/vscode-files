def checkno_of_paratha(mid):
    m=0
    for j in range(0,l):
        x=2*mid//r[j]
        m+=(-1+(1+4*x)**0.5)//2
    return m>=p

p=int(input())
l=int(input())
r=list(map(int,input().split()))


lo, hi = 0, 1e7
ans= -1
while lo<= hi:
    mid = lo + (hi - lo)//2
    if checkno_of_paratha(mid):
        hi = mid - 1
        ans = mid
    else:
        lo = mid+1
print(ans)
