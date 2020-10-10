import subprocess
import random

for i in range(100000):
    a = random.randint(1, 1000)
    b = random.randint(1, 1000)
    n = random.randint(1, 1000000)
    k = random.randint(1, 1000000)
    s = str(a) + " " + str(b) + " " + str(n) + " " + str(k)
    with open("input.txt", "w") as f:
        f.write(s)
        f.close()
    subprocess.call("cheker")
    ans = ""
    with open("output.txt", "r") as f:
        ans = f.read()
        f.close()
    subprocess.call("main")
    res = ""
    with open("output.txt", "r") as f:
        res = f.read()
        f.close()
    if ans != res:
        print(s, ans, res)

