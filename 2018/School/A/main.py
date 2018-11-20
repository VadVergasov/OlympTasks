n = input()
n = int(n)
#something
import math

l = 0
r = n

while(l != r-1):
    pos = math.ceil((l + r) / 2.0)
    sum=0
    if pos % 2 == 0:
        sum = pos / 2 * (pos + 1)
    else:
        sum = pos * ((pos + 1) / 2)
    if sum <= n:
        l = math.floor((l + r) / 2.0)
    else:
        r = math.floor((l + r) / 2.0)

if abs(n-l*(l+1)/2)<abs(n-r*(r+1)/2) or n-r*(r+1)/2<0:
    print(l)
else:
    print(r)