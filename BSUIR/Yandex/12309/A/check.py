import subprocess, random

n = int(input())

for i in range(n):
    n1 = random.randint(1, 10)
    s = random.randint(1, 100)
    st = str(n1) + " " + str(s) + "\n"
    for j in range(n1):
        st += str(random.randint(1, 20)) + " 2\n"
    f = open("castle.in", "w")
    f.write(st)
    f.close()
    inp = open("castle.in", "r")
    out = open("castle.out", "w")
    subprocess.call("another")
    inp.close()
    out.close()
    f = open("castle.out", "r")
    res = f.read()
    f.close()
    inp = open("castle.in", "r")
    out = open("castle.out", "w")
    subprocess.call("main")
    inp.close()
    out.close()
    f = open("castle.out", "r")
    r = f.read()
    f.close()
    if r != res:
        print(st)
