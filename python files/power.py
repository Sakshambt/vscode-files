def  powerfunction(a,b):
    p=1
    if b==1:
        return a;
    x = powerfunction(a,b-1)
    x = x* a
    return x



a=int(input())
b=int(input())
s= powerfunction(a,b)
print(s)