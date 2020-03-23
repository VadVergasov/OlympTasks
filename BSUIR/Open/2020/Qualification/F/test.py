import subprocess
import random
import time

s = "1000\n"

for i in range(1000):
    s += str(random.randint(1e8 + 1, 1e9)) + "\n"

with open("in.txt", "w") as f:
    f.write(s)
    f.close()

inp = open("in.txt", "r")

out = open("out.txt", "w")

start = time.time()

subprocess.call("broot", stdin=inp, stdout=out)

end = time.time()

print(end - start)
