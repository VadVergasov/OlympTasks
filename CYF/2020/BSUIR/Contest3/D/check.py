import subprocess, random

n = int(input())

for i in range(n):
    ni = random.randint(2, 10)
    q = random.randint(1, 10)
    s = "1\n"
    s += str(ni) + " " + str(q) + "\n"
    for j in range(q):
        if j % 2 == 0:
            s += "! " + str(random.randint(1, ni - 1)) + "\n"
        else:
            s += "?\n"
    f = open("i.t", "w")
    f.write(s)
    f.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("broot")
    subprocess.call("py main.py", stdin=inp, stdout=out)
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
        print("broot")
        print(res)
        print("normal")
        print(res2)
        print("input")
        print(s)
        break
    r.close()
