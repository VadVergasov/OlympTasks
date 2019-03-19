import subprocess, random

n = int(input())

for i in range(n):
    ni = random.randint(1, 3)
    s = ""
    s = str(ni) + "\n"
    for j in range(ni):
        s += str(random.randint(-1000, 1000)) + " "
    f = open("i.t", "w")
    f.write(s)
    f.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("broot")
    subprocess.call("broot", stdin=inp, stdout=out)
    out.close()
    inp.close()
    r = open("o.t", "r")
    res = r.read()
    r.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("normal")
    subprocess.call("main", stdin=inp, stdout=out)
    out.close()
    inp.close()
    r = open("o.t", "r")
    res2 = r.read()
    if res2 != res:
        print(res, res2)
        print(s)
        break
    r.close()
