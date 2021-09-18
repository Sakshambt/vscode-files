# cook your dish here
for _ in range(int(input())):
    t={}
    present = {}
    f = int(input())

    for n in range(f):
        name, time, date, status, rollno = input().split(" ")
        time = int(time)
        if status == "Entry":
            if rollno in t: t[rollno] -= time
            else: t[rollno] = time
        else:
            if rollno in t: t[rollno] += time
            else: t[rollno] = time

        if date in present: present[date] += 1
        else: present[date] = 1

    timeinmin = t.values()
    maxh = max(timeinmin)
    student= f/2
    d = len(present)
    print(round(maxh/60)," ",round(student/d))

    # cook your dish here
for t in range(int(input())):
    n, k, f = map(int, input().split())
    sum = 0
    for i in range(n):
        s, e = map(int, input().split())
        sum = sum + e - s
    if k <= (f - sum):
        print("Yes")
    else:
        print("No")
    