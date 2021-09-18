def check(i):
    if(i==len(li)-1):
        return True
    
    checker = check(i+1)
    if checker==True:
        return li[i+1]>=li[i]
    else:
        return False


li=list(map(int,input().split(" ")))
print(check(0))
