def subset(li,i,path):
    if len(li)==i:
        print(path)
        return

    subset(li,i+1,path);
    subset(li,i+1,str(li[i])+" "+path);
    return;
t=int(input())
while t>0:
    t-=1
    n=int(input())
    li=[]
    for i in range(n,0,-1):
        li.append(i)
    path=""
    subset(li,0,"")