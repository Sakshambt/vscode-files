def prime(a):
    j=2
    while j*j <= a:
        if a%j==0:
            return False
        j+=1
    return True


for i in range(int(input())):
    n=int(input())
    flag=0
    for i in range(2,n):
        if prime(i) and prime(n-i):
            print(i, n-i)
            flag+=1
            break
        
    if flag==0:
        print("-1 -1")
