import subprocess, random, math, datetime

n = int(input())

for i in range(n):
    a = random.randint(1, 1e5)
    b, c = (random.randint(1, a), min(random.randint(1, 1e9), math.factorial(a)))
    f = open("t.i", "w")
    f.write(str(a) + " " + str(b) + " " + str(c))
    f.close()
    i = open("t.i", "r")
    out = open("t.o", "w")
    s = datetime.datetime.now()
    to = subprocess.call("broot", stdin=i, stdout=out)
    e = datetime.datetime.now()
    print("broot", (e - s))
    if to != 0:
        continue
    out.close()
    res = open("t.o", "r")
    r = res.read()
    res.close()
    out = open("t.o", "w")
    i.close()
    i = open("t.i", "r")
    s = datetime.datetime.now()
    subprocess.call("main", stdin=i, stdout=out)
    e = datetime.datetime.now()
    print((e - s))
    out.close()
    ans = open("t.o", "r")
    ret = ans.read()
    ans.close()
    if ret != r:
        print(a, b, c, "not correct")
