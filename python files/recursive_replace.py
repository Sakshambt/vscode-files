def inputvalue(n):
    i=0
    while(i<n):
        x=int(input())
        l.append(x)
        i+=1
'''
def replace(m1,m2):
    r=(m1*3+m2*2)%100
    l.append(r)Gskmfi ksirm mskfir mmskd Flijeo 
'''

def twoSmallestno(x):
    if(x==1):
        return l[0]
    else:
        i=0; min1=l[0]; c=0
        while i<len(l):
            if(l[i]<min1):
                min1=l[i]
                c=i
            i+=1
        l.pop(c) 
        i=0
        min2 =l[0]
        c =0
        while i<len(l):
            if(l[i]<min2 and l[i]!=min1):
                min2=l[i]
                c=i
            i+=1
        l.pop(c)
        #replace(min1, min2)
        r=(min1*3+min2*2)%100
        l.append(r)
        x=len(l)
        s=twoSmallestno(x)
        return s


n=int(input())
l=[]
inputvalue(n)
x=len(l)
s=twoSmallestno(x)
print(s)
'''
def inputvalue(n):
    i=0
    while(i<n):
        x=int(input())
        l.append(x)
        i+=1

def replace(m1,m2):
    r=(m1*3+m2*2)%100
    l.append(r)


def twoSmallestno():
    i=0; min1=l[0]; c=0
    while i<len(l):
        if(l[i]<min1):
            min1=l[i]
            c=i
        i+=1
    l.pop(c) 
    i=0
    min2 =l[0]
    c =0
    while i<len(l):
        if(l[i]<min2 and l[i]!=min1):
            min2=l[i]
            c=i
        i+=1
    l.pop(c)
    #replace(min1, min2)
    r=(min1*3+min2*2)%100
    l.append(r)


n=int(input())
l=[]
inputvalue(n)
while len(l)>1:
    twoSmallestno()
print(l[0])
'''