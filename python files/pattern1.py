#n=int(input())
#i=1
#while i<=n:
#   k=n-i
#    while k>0:
#        print(" ",end="")
#        k-=1
#    j=1    
#    while j<=((2*i)-1):
#        print("*",end="")
#        j=j+1
#   i+=1
#    print("")


n=int(input())
i=1
while i<=n:
   print(" "*(n-i),end="")
   print("*"*(2*i-1))
   i+=1
   
#    while j<=((2*i)-1):
#        print("*",end="")
#        j=j+1
#   i+=1
#    print("")
