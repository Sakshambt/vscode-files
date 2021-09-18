# cook your dish here
for t in range(int(input())):
    start={}
    end=[]
    n=int(input())
    for i in range(1,n+1):
        x,y=map(int, input().split())
        if x in start:
            start[x]+=1
        else:
            start[x]=1
            end.append(x)
        
        if y+1 in start:
            start[y+1]-=1
        else:
            end.append(y+1)
            start[y+1]=-1

    ans = 0
    sum = 0
    end.sort()
    for k in end:
        sum+=start[k]
        ans= max(ans,sum)
    print(ans)

"""
for t in range(int(input())):
    start={}
    end={}
    n=int(input())
    totaltime= int(input())
    for i in range(1,n+1):
        x,y=input().split(" ")
        start[i]=int(x)
        end[i]=int(y)
    c=0
    for t in range(1,totaltime+1):
        sum=0
        for k in range(1,n+1):
            if(start[k]<=t and end[k]>=t):
                sum+=1
        if(sum>c):
            c=sum
    print(c)  
"""