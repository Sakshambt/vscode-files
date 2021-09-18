import sys
import random
 
arr = []
queries_count = 0
def find_pos(x):
    global queries_count
    queries_count = queries_count + 1
    if queries_count > 40:
        print('error, took more than 40 queries')
        print('hidden array = ', arr, 'x = ', x)
        exit()
 
    if x < 0 or x >= len(arr):
        print('error, index out of range')
        print('hidden array = ', arr, 'x = ', x)
        exit()
    return arr[x]
    
# ----------------- Do not modify anything above this line -----------------------
# copy your solution here
def leftside(n,x,l,r):
    a1=-2
    while r>=l:
        mid=l+(r-l)//2
        y=find_pos(mid)
           
        if y>x:
            r = mid - 1
        elif y<x:
            l = mid + 1
        else:
            a1=mid
            r=mid-1
    return a1

def rightside(n,x,l,r):
    a2=-2
    while r>=l:
        mid=l+(r-l)//2
        y=find_pos(mid)
           
        if y>x:
            r = mid - 1
        elif y<x:
            l = mid + 1
        else:
            a2=mid
            l=mid+1
    return a2
    
def count(n,x):
    left = 0
    right = n-1
    ans1= leftside(n,x,0,n-1)
    ans2= rightside(n,x,0,n-1)
    if ans1==-2 and ans2==-2:
        return 0
    else:
        return ans2-ans1+1
 
# ----------------- Do not modify anything below this line -----------------------
 
n = random.randint(1, 100000)
dict = {}
for _ in range(0, n):
    app = random.randint(0, 100000)
    arr.append(app)
    dict[app] = dict.get(app, 0) + 1
 
arr = sorted(arr)
 
for _ in range(1, 1000):
    queries_count = 0
    x = random.randint(0, 100000)
    ans = count(len(arr), x)
    if ans != dict.get(x, 0):
        print('Wrong answer, expected = ', dict.get(x, 0), 'got = ', ans)
        print('hidden array = ', arr, 'x = ', x)
        exit()
 
print('Correct Answer!')