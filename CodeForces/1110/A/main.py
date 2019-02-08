f = open("input.txt", "r")
s = f.readline()

s = s.split(" ")
b = int(s[0])
k = int(s[1])
s = f.readline()
a = s.split(" ")

n = 0
for i in range(k):
    n += int(a[i]) * pow(b, k - i - 1, 10)
    n %= 10

if n % 2 == 0:
    print("even")
else:
    print("odd")
