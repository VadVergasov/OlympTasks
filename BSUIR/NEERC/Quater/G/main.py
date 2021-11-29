import math

a, b = input().split(" ")

a = int(a)
b = int(b)

lcm = 1

for i in range(1, a + 1):
    lcm = lcm * i // math.gcd(lcm, i)

print(min(lcm, b))
