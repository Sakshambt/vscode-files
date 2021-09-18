def truesize(a,tf):
    if tf>a:
        return True
    elif tf<a:
        return False

def search(l,r,tf):
    if l<=r:
        mid = (l+r)//2
        f = truesize(mid,tf)
        if f == None:
            return mid
        elif f:
            return search(mid+1 ,r , tf)
            #l = mid+1
        else:
            return search(l, mid-1 ,tf)
            #r = mid - 1

tf = int(input())
print(search(1,2500,tf))