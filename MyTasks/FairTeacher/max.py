f = open("max.txt", "w")
n = 100000
k = 1000

s = str(n) + " " + str(k) + "\n"

for i in range(n - 1):
    s += "100000 "

s += "100000\n"

for i in range(n - 1):
    s += "1000 "

s += "1000\n"

f.write(s)
f.close()
