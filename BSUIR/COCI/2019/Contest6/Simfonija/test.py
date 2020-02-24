import random

s = "100000 "

s += str(random.randint(0, 100000)) + "\n"

for i in range(100000):
    s += str(random.randint(-1e9, 1e9)) + " "

s += "\n"

for i in range(100000):
    s += str(random.randint(-1e9, 1e9)) + " "

f = open("t.txt", "w")
f.write(s)
f.close()
