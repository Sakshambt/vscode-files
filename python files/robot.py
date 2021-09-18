import math 
for i in range(int(input())):
    x1,y1,x2,y2=map(int,input().split())
    diffx=x2-x1
    diffy=y2-y1
    if diffy>0:
        print('N'*diffy,end="")
    else:
        print('S'*abs(diffy),end="")
    if diffx>0:
        print('E'*diffx,end="")
    else:
        print('W'*abs(diffx),end="")
    print()
