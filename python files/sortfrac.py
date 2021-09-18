def denominator_0(num,store):
    if num>0:
        if 1e10 not in store:
            store[1e10] = (num, 0)
        else:
            if store[1e7][0] > num:
                store[1e10] = (num,0)
    else:
        if -1e10 not in store:
            store[-1e10] = (num,0)
        else:
            if store[-1e10][0] < num:
                store[-1e10] = (num, 0)
    print(store)

def denominator_not_0(num,den,store):
    fraction= num/den
    if fraction in store:
        n=store[fraction][0]
        d=store[fraction][1]
        if den*d < 0:
            if d > 0:
                store[fraction]= (num, den)
            else:
                store[fraction]= (n,d)
        else:
            if den > 0 or num > 0:
                
                if num > 0:
                    if num < n:
                        store[fraction]= (num, den)
                    else:
                        store[fraction]= (n,d)
                else:
                    if num > n:
                        store[fraction]= (num, den)
                    else:
                        store[fraction]= (n,d)  
            else:
                if num > n:
                    store[fraction]= (num, den)
                else:
                    store[fraction]= (n,d)
                          
    else:
        store[fraction]= (num,den)
    print(store)


n=int(input())
li = list(map(int, input().split()))
store = {}
i=0
while i < n: 
    num = li[2*i]
    den = li[2*i+1]
    i+=1
    if den != 0:
        denominator_not_0(num,den,store)
    else:
        denominator_0(num,store)

nostore= sorted(store)
print(len(nostore))
for key in nostore:
    print(*store[key], end=" ")



