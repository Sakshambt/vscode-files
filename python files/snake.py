'''
R=int(input())
for i in range(R):
    N=int(input())
    A=[]
    L=str(input())[:N]
    for j in range(len(L)):
        if L[j]!=".":
            A.append(L[j])
    if len(A)==0:
        print("Valid")
    elif A[0]!="H" or A[len(A)-1]!="T":
        print("Invalid")
    else:
        for k in range(0,len(A)-1):
            if A[k]==A[k+1]:
                print("Invalid")
                break
        else:
            print("Valid")

# cook your dish here
for i in range (int(input())):
    n=int(input())
    c=-1
    p=[]
    li=input()
    for j in range(n):
        if li[j]!=".":
            p.append(li[j])
            
    for j in range(len(p)-1):
        if p[0]=="T" or p[len(p)-1]=="H":
            print("Invalid")
            c=0
            break
        elif p[j]==p[j+1]:
            print("Invalid")
            c=0
            break
        
    if c==-1:
        print("Valid")
'''
# cook your dish here
def check(p):
    
    if p[0]=="T" or p[len(p)-1]=="H":
            return "Invalid"
            
    for j in range(0,len(p)-1):
        if p[j]==p[j+1]:
            return "Invalid"
    
    return "Valid"




for i in range (int(input())):
    n=int(input())
    p=""
    li=input()
    for j in range(n):
        if li[j]!=".":
            p+=li[j]
    if len(p)==0:
        print("Valid")
    else:
        s=check(p)
        print(s)
        