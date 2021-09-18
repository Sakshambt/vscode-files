n= int(input())
li=list(map(int,input().split()))

def matches(li):
    if len(li)==2:
        if li[0]!=li[1]:
            return 1
        else:
            return 2
    
    mid= len(li)//2

    lmatch=matches(li[:mid])
    rmatch=matches(li[mid:])
    matchl=set(li[:mid])
    matchr=set(li[mid:])

    if (matchl and matchr):
        return lmatch+rmatch
    else:
        return lmatch+rmatch+1


c=matches(li)
print(c)
