mapin={}
n=int(input())
for i in range(n):
    s, e, name, d= input().split()
    if s not in mapin:
        mapin[s]= {}
        mapin[s][name]= 1
    else:
        if name not in mapin[s]:
            mapin[s][name]= 1
        else:
            mapin[s][name]+=1

    if e not in mapin:
        mapin[e]= {}
        mapin[e][name]=1
    else:
        if name not in mapin[e]:
            mapin[e][name]= 1
        else:
            mapin[e][name] += 1

count=0
k=mapin.keys()
for i in k:
    if len(mapin[i])==2:
        j=mapin[i].keys()
        for l in j:
            if mapin[i][l]!=2:
                break
            count+=1
        count-=1
print(count)
    

    
