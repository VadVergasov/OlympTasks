import subprocess
import time

start = time.time()

for i in range(100):
    subprocess.call("g++ -static -std=c++14 -O3 main.cpp -o main")
    if i%10==0:
        print(i)

end = time.time()

print(end-start)