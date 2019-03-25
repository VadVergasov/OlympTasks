import random

f = open("max.txt", "w")

n = 1000000
H = pow(2, 32) - 1
q = 100000

s = str(n) + " " + str(H) + " " + str(q) + "\n"

for i in range(n):
    s += str(random.randint(1, H)) + " "

s += "\n"

for i in range(q):
    s += "500000 500000 " + str(random.randint(1, H)) + "\n"

f.write(s)
f.close()
