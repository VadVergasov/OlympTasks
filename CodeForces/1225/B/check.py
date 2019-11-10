import subprocess
import random

for i in range(10000):
    s = "1\n"
    n = random.randint(1, 100)
    k = random.randint(1, n)
    s += str(n) + " " + str(random.randint(1, 100)) + " " + str(k) + "\n"
    for i in range(n):
        s += str(random.randint(1, k)) + " "
    f = open("in.txt", "w")
    f.write(s)
    f.close()
    inp = open("in.txt", "r")
    out = open("out.txt", "w")
    subprocess.call("checker", stdin=inp, stdout=out)
    out.close()
    inp.close()
    f = open("out.txt", "r")
    right = f.read()
    f.close()
    inp = open("in.txt", "r")
    out = open("out.txt", "w")
    subprocess.call("main", stdin=inp, stdout=out)
    out.close()
    f = open("out.txt", "r")
    ans = f.read()
    f.close()
    if ans != right or right.find(ans) == -1 or ans.find(right) == -1:
        print(s)

