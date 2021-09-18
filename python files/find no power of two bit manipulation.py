n = int(input())
c = n & (n-1)
if c == 0:
    print("Yes")
else:
    print("no")