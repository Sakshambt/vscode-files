# cook your dish here
A=int(input())
B=int(input())
v=A
for i in range(A):
    if(v%B==0):
        print(v)
        break
    else:
        v=v-1
