def search(left, right):
  #  while right- left>10**-6:
    for i in range(0, 200):
        mid=left+(right-left)/2
        if mid*mid+mid**0.5%(10**-6)==c:
            return(mid)
        elif mid*mid+mid**0.5>c:
            right=mid
        else:
            left=mid
    return mid


c=float(input())
d=search(0, c**5)
print("%0.8f"%d)