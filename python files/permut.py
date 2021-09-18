def permutation(m,n):
    if m==[]:
        return False
    m.sort()
    n.sort()
    return m==n
    
for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    l,r=0,n
    c=0
    while r>l:
        if permutation(a[l:r],b[l:r]):
            print(a[l:r])
            print(b[l:r])
            print(r-l)
            c+=1
            break
    
        elif permutation(a[l+1:r],b[l+1:r]):
            print(a[l+1:r])
            print(b[l+1:r])
            print(r-l+1)
            c+=1
            break
            
        elif permutation(a[l:r-1],b[l:r-1]):
            print(a[l:r-1])
            print(b[l:r-1])
            print(r-1+l)
            c+=1
            break
        
        l=l+1
        r=r-1
        
    if c!=1:
        print("0")
'''
a=[1,2,3]
b=[4,5,6]
def permutation(m,n):
    m.sort()
    n.sort()
    print(m==n)
l=0
r=3
permutation(a[l+1:r],b[l+1:r])
permutation(a[l:r],b[l:r])
'''