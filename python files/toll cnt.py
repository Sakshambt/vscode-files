'''
def inputvar(n):
    while n>0:
        n-=1
        status.append(input())
        plateNo.append(input())
        time.append(int(input()))

def tollcalc(tin,tout):
    s=0
    diff=tout-tin
    v=diff%60
    t=diff//60
    if v>=30:
        s = 60+t*30
    else:
        s = 60 + (t-1)*30 
    return s

status=[]
plateNo=[]
time=[]
sum=0

n=int(input())
inputvar(n)

for i in range(0,n):
    car=plateNo[i]
    for j in range(i,n):
        if car==plateNo[j]:
            if status[j]=="entry":
                ti=time[j]
            else:
                to=time[j]
#               time.pop[j]
#               status.pop[j]
#                plateNo.pop[j]
    if(ti!=0):    
        pay=tollcalc(ti,to)
        sum=sum+pay
        n=len(time)
    ti=0
print(sum)
'''
# cook your dish here
import math
n=int(input())
entry=dict()
exit=dict()
for i in range(0,n):
    status=input()
    plateNo=input()
    time=int(input())
    if status=="entry":
        entry[plateNo]=time
    else:
        exit[plateNo]=time
sum=0
for x in entry:
    t=(exit.get(x)-entry.get(x))/60
    t=math.ceil(t)
    if(t>=1):
        sum+=60+(t-1)*30
print(sum)
        