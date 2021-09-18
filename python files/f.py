li=list(map(int,input().split()))
lo=li[0]
hi=len(li)-1
while lo<=hi:
    mid=(lo+hi)//2
    if li[mid]>mid:
        hi=mid-1
        ans=mid
    elif li[mid]==mid:
        lo=mid+1

print(ans)
