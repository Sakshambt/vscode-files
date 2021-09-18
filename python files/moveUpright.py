def fact(s):
    if s == 0:
        return 1
    if s==1:
        return 1
    
    s = s* fact(s-1)
    return s

for t in range(int(input())):
    n,m= map(int,input().split())
    x = m - 1
    y = n - 1
    sum = fact(x+y)
    c, v = 1 , 1
    c = fact(x)
    v = fact(y)
    print(sum//(c*v))
