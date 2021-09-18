def fact(s):
    if s==1:
        return 1
    
    s = s* fact(s-1)
    return s

i = int(input())
print(fact(i))