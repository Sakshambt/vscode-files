def elementonce(sr):
    freq={}
    for i in range(0,len(sr)):
        if freq.get(sr[i])==None:
            freq[sr[i]]=1
        else:
            freq[sr[i]]+=1

    result=[]
    for k in freq:
        if (freq[k]==1):
            result.append(k)
    return result

sr="sssffcggdrsvhbgtrrtrf"
result=elementonce(sr)
print(result)