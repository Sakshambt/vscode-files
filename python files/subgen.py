for t in range(int(input())):
    n=int (input())
    #li= list(map(int,input().split()))
    def subset(n, idx, path):
        if idx == n:
            print(path)
            return
        
        subset(n, idx+1, path)
        subset(n, idx+1 , str(n-idx)+" "+path)

        return

    #li.sort()
    subset(n, 0, "")