def transpose(m,n):
    for row in range(0,n):
        for coloumn in range(0,n):
            if m[row][coloumn]!=m[coloumn][row]:
                return 0
    return 1

def diagonal(m,n):
    for d in range(0,n):
        if m[d][d]==0:
            return 0
    return 1

def ltriangle(m,n):
    for row in range(1,n):
        for coloumn in range(0,row):
            if m[row][coloumn]!=0:
                return 0
    return 1

def utriangle(m,n):
    for row in range(0,n):
        for coloumn in range(row+1,n):
            if m[row][coloumn]!=0:
                return 0
    return 1



for t in range(int(input())):
    n= int(input())
    m=[]
    for i in range(0,n):
        m.append(list(map(int,input().split())))

    d=0
    s = transpose(m,n)
    t = utriangle(m,n) or ltriangle(m,n) 
    if utriangle(m,n) and ltriangle(m,n):
        d = diagonal(m,n)
    print(s+2*t+4*d)
            