'''
import sys
 
def find_pos(x):
    print('1 ' + str(x))
    sys.stdout.flush()
    t = int(input())
    return t
# ----------------- Do not modify anything above this line -----------------------
# Complete this function count(n, x), this returns 0 always and hence is wrong, it should return the number of occurrences of x in Chef's array
# You can use the function find_pos(x) to find the value of the element at position x (0 indexed)
# If the index is invalid or you use more than 40 queries to obtain the value, you will receive Wrong Answer
# Chef's array size is not more than 10 ** 5
def count(n, x):
    answer = 0
    for i in range(0, n):
        go = find_pos(i)
        if go == x:
            answer += 1
    return answer
 
# ----------------- Do not modify anything below this line -----------------------
 
n = int(input())
x = int(input())
 
print('2 ' + str(count(n, x)))
'''

'''
def search(arr, l ,r, x):
    if r<l:
        return -1
    mid = l+(r-l)//2
    y=arr[mid]
    if y==x:
        return mid
    elif y>x:
        return search(arr, l,mid-1,x)
    else:
        return search(arr, mid+1, r,x)


def count(arr,n, x):
    ans=0
    mid=search(arr,0,n-1,x)
    if mid==-1:
        return 0

    ans+=1
    left=mid-1
    while(arr[left]==x and left>=0):
        ans+=1
        left-=1
    right=mid+1
    while(right<n and arr[right]==x):
        ans+=1
        right+=1
    
    return ans

def count(arr,n,x):
    ans=0
    left=0
    right= n-1
    while right>=left:
        mid=left+(right-left)//2
        y=arr[mid]
        if y==x:
            ans+=1
            left=mid-1
            while(arr[left]==x and left>=0):
                ans+=1
                left-=1
            right=mid+1
            while(right<n and arr[right]==x):
                ans+=1
                right+=1
            return ans
        elif y>x:
            right = mid - 1
        else:
            left = mid + 1
    return 0
'''
def count(arr,n,x):
    ans1, ans2=-2,-2
    left=0
    right= n-1
    while right>=left:
        mid=left+(right-left)//2
        y=arr[mid]
           
        if y>x:
            right = mid - 1
        elif y<x:
            left = mid + 1
        else:
            ans1=mid
            right=mid-1
    right=n-1
    left=0
    while right>=left:
        mid=left+(right-left)//2
        y=arr[mid]
           
        if y>x:
            right = mid - 1
        elif y<x:
            left = mid + 1
        else:
            ans2=mid
            left=mid+1
    print(ans1,ans2)
    if ans1==-2 and ans2==-2:
        print("0")
    else:
        print(ans2-ans1+1)

    return 


def upper_bound(low, high, X):
    
    while low < high-1:
        middle = (low+high)//2
        if find_pos(middle)==X:
            low = middle
        else:
            high = middle
    if find_pos(high)==X:
        return high
    else:
        return low

def lower_bound(low, high, X):
    while low < high-1:
        middle = (low+high)//2
        if find_pos(middle)==X:
            high = middle
        else:
            low = middle
    if find_pos(low)==X:
        return low
    else:
        return high
def count(n, X):
    global cnt
    low = 0
    high = n-1
    
    middle = (low+high)//2
    val = find_pos(middle)
    while low<=high:
        if val == X:
            break
        elif val>X:
            high = middle-1
        else:
            low = middle+1
        middle = (low+high)//2
        val = find_pos(middle)
    
    if val !=X:
        print("value not found")
        return 0
    
    lowerLimit = lower_bound(low, middle, X)
    

    upperLimit = upper_bound(middle, high, X)
    
    return upperLimit-lowerLimit+1




n=int(input())
arr= list(map(int,input().split()))
x=int(input())
count(arr,n,x)
#print(ans)



