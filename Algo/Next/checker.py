import subprocess, random

n = int(input())

for i in range(n):
    f = open("t.i", "w")
    a = random.randint(1, 1e8)
    s = str(a) + " "
    print(a)
    for j in range(a):
        s += str(random.randint(1, 1e10)) + " "
    b = random.randint(1, 1e8)
    s += str(b) + " "
    print(b)
    for j in range(b):
        s += str(random.randint(1, 1e8)) + " "
    f.write(s)
    f.close()
    i = open("t.i", "r")
    out = open("t.o", "w")
    subprocess.call("main", stdin=i, stdout=out)
