import subprocess
import time

total_time = 0.0

for i in range(10):
    subprocess.call("py max.py")
    inp = open("max.txt", "r")
    out = open("output.txt", "w")
    start = time.time()
    subprocess.call("main", stdin=inp, stdout=out)
    end = time.time()
    total_time += end - start
    inp.close()
    out.close()

print(total_time)
