# cook your dish here
def dist(s,n):
    p = 0
    for j in range(n-1):
        if s[j] != s[j+1]:
            p += 1
        else:
            p += 2
    return p
    


for _ in range(int(input())):
    n, k = map(int,input().split())
    initial = input()
    change = list(map(int,input().split()))
    initialdist = dist(initial, n)
    for i in range(k):
        pos = change[i]-1
        if pos > 0:
            if initial[pos] == initial[pos-1]:
                initialdist -= 1
            elif pos!= 0:
                initialdist += 1
        if pos < n-1:
            if initial[pos] == initial[pos+1]:
                initialdist -= 1
            elif pos != n-1:
                initialdist += 1
        print(initialdist)
        if initial[pos]=='0':
            initial = initial[:pos]+'1'+initial[pos+1:]
        else:
            initial = initial[:pos]+'0'+initial[pos+1:]