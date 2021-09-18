import math
def able_to_find_k_in_mid(mid, k, n, p):
    pos = {}
    for i in range(n, 2*n):
        pos[i]={-1}
    
    b=[]
    for i in range(0,n):
        for j in range(n,2*n):
            d = math.sqrt((p[i][0] - p[j][0])**2 + (p[i][1] - p[j][1])**2)
            if d <= mid:
                if j not in b:
                    b.append(j)
                if i not in b:
                    b.append(i)
    if len(b)>=k:
        return True
    else:
        return False
        
            
    
def maxmin_distance(l, r , coordinates, k, n):
    ans = 0
    e = 1e-6
    while r-l > e:
        mid = l+(r-l)/2
        if able_to_find_k_in_mid(mid, k, n, coordinates):
            ans = mid
            r = mid
        else:
            l = mid
            
    return ans


n , k = map(int,input().split())
coordinates=[]
for i in range(2*n):
    x , y = list(map(int,input().split()))
    coordinates.append([x,y])
lo=0
hi = 1e5* (2**0.5)
ans = maxmin_distance(lo, hi, coordinates, k , n)
print("%0.7f"%ans)