import sys

n = 10000000

state = list("1" * n)

for i in range(2, n + 1):
    for j in range(i, n, i):
        state[j] = chr(ord(state[j]) + 1)
        if state[j] == "6":
            state[j] = "0"

res = 0
for i in range(1, n + 1):
    if state[i] == "1":
        res += 1
        sys.stdout.write(str(i) + ", ")
print()
print(res)
