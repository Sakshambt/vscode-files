def checkbit(n, pos):
    return((n and (1<<pos))!= 0)

def setbit(n, pos):
    return(n or (1<<pos))





n = int(input())
pos = int(input())
check = checkbit(n, pos)
print(check)
print(setbit(n, pos))
c = (1<<pos)
b = (n & ~c) | ((0<<pos) & c)
print(b)


