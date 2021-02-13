import subprocess
import random
import time

t = 1000
n = []
for i in range(t):
    n.append(random.randint(1e17, 1e18))

with open("input.txt", "w") as f:
    out = str(t) + "\n"
    out += str(n)[1:-1].replace(", ", " ")
    f.write(out)

start = time.time()
inp = open("input.txt", "r")
subprocess.call("main.exe", stdin=inp, stdout=None)
end = time.time()

print(end - start)

