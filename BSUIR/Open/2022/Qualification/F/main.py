a, b = input().split(" ")
a = int(a)
b = int(b)

if min(abs(a + b), abs(a - b), abs(b - a)) == abs(a + b):
    print(a + b)
elif min(abs(a + b), abs(a - b), abs(b - a)) == abs(a - b):
    print(a - b)
else:
    print(b - a)
