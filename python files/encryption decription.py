# cook your dish here
# cook your dish here
'''
n=int(input())
li=[]
for i in range(0,n):
    x=input()
    li.append(x)
code=input()
lettercount={}
for i in range(0,len(li)):
    x=li[i]
    for j in range(0,len(x)):
        if x[j] in lettercount:
            lettercount[x[j]]+=1
        else:
            lettercount[x[j]]=1
print(lettercount)
codecount={}
for j in range(0,len(code)):
    if code[j] in codecount:
        codecount[code[j]]+=1
    else:
        codecount[code[j]]=1
print(codecount)
'''
ink = ["a","b","c","d","e","f","g","h"]
pink=[]
'''
for a in ink:
    if a == "a":
        continue
pink.append({})'''
for a in ink:
    if a == "a":
        continue
    for b in ink:
        if b =="b" or b==a:
            continue
        for c in ink:
            if c=="c" or c==a or c==b:
                continue
            for d in ink:
                if d== "d" or d==a or d==b or d==c:
                    continue
                for e in ink:
                    if e== "e" or e==a or e==b or e==c or e==d:
                        continue
                    for f in ink:
                        if f== "f" or f==a or f==b or f==c or f==d or f==e:
                            continue
                        for g in ink:
                            if g== "g" or g==a or g==b or g==c or g==d or g==f or g==e:
                                continue
                            for h in ink:
                                if h== "h" or h==a or h==b or h==c or h==d or h==f or h==e or h==g:
                                    continue
                                pink.append({"a":a,"b":b,"c":c,"d":d,"e":e,"f":f,"g":g,"h":h})



w = int(input())
ink=set(ink)
words = set()
i=0
while i<w:
    i+=1
    word = input()
    words.add(word)
secretMessage = input().split()
i = 0
j = 0
possibleKey = [False, None]
while i < len(secretMessage):
    while j<len(pink):
        secretWord= secretMessage[i]
        decryptedWord=""
        key = pink[j]
        for char in secretWord:
            if not char in ink:
                decryptedWord+=char
            else:
                decryptedWord+= key[char]
        if decryptedWord in words:
            i+=1
            possibleKey[0] = True
            possibleKey[1] = j
            break
        else:
            if possibleKey[0]:
                possibleKey[0] = False
                possibleKey[1] = j
                i=0
            j+=1
            
str=""
for secretWord in secretMessage:
    decryptedWord = ""
    for char in secretWord:
        if not char in ink:
            decryptedWord+= char
        else:
            decryptedWord += pink[possibleKey[1]][char]
    str=str+decryptedWord+" "
print(str)