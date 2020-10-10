n, x = [int(x) for x in input().split()]

a = []
b = []

for i in range(n):
    s = input().split()
    a.append(int(s[0]))
    b.append(int(s[1]))

for i in range(0, n):
    up = 1
    down = 1
    for j in range(i, n):
        up *= a[j]
        down *= b[j]
        if up == x * down:
            print(i + 1, j + 1)
            exit()

print("0 0")
