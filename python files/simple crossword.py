def inputtable(table):
    x=input()
    table.append(x)

def hori(table, b):
    c=0
    o=0
    for i in range(len(table[b])):
        if table[b][i]=="b" or table[b][i]=="r":
            c+=1
    if c==2:
        for i in range(len(table[b])):
            if (table[b])[i]=="b" or (table[b])[i]=="r":
                start=i
                o+=1
                break
        for i in range(o+1,len(table[b])):
            if (table[b])[i]=="b" or (table[b])[i]=="r":
                end=i
                break
    else:
        return -1
    length=end-start+1
    return length

def check(l):
    for k in range(w):
        if len(words[k])==l:
            li.append(words[k])
        
def vertical(table ,v ):
    c=0
    o=0
    for i in range(len(table)):
        if table[i][v]=="b" or table[i][v]=="r":
            c+=1
    if c==2:
        for i in range(len(table)):
            if table[i][v]=="b" or table[i][v]=="c":
                st=v
                o+=1
                break

        for i in range(o+1,len(table)):
            if (table[i])[v]=="b" or (table[i])[v]=="r":
                en=v
                break   
    else:
            return -1
    length=en-st+1
    return length

def checkver(l):
    for k in range(w):
        if len(words[k])==l:
            km.append(words[k])

n,m=map(int,input().split())
table=[]
li=[]
km=[]
for i in range(n):
    inputtable(table)

words=[]
w=int(input())
for i in range(w):
    wordstofill=input()
    words.append(wordstofill)
for j in range(n):
    lengths=hori(table,j)
    check(lengths)
for i in range(len(li)):
    print(li[i])


