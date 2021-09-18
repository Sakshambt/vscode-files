n=int(input())
i=1
c=-5
while i<=n:
    if (i%2==0):
        u=1
        j=c+5
        while u<=5:
            print(j,end=" ")
            j-=1
            u+=1
    else:
        u=1
        c=c+5
        while u<=5:
            c+=1
            print(c,end=" ")
            u+=1
    print()
    i+=1
