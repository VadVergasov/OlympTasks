import math

n = int(input())
k = int(input())


def C(n1, k1):
    if 0 <= k1 <= n1:
        nn = 1
        kk = 1
        for t in range(1, min(k1, n1 - k1) + 1):
            nn *= n1
            kk *= t
            n1 -= 1
        return nn // kk
    elif n1 <= 0:
        return 0
    elif k1 < 0:
        return 1
    else:
        return 0


def A(n1, k1):
    if 0 <= k1 and 0 < n1:
        nn = 1
        kk = 1
        for t in range(1, min(k1, n1 - k1) + 1):
            nn *= n1
            kk *= t
            n1 -= 1
        return nn // kk * math.factorial(k1)
    elif n1 <= 0:
        return 0
    elif k1 < 0:
        return 1
    else:
        return 0


res = 0

for i in range(k, int(math.log10(n)) + 1):
    res += C(i, k - 1) * A(9, k)

i = 1
while i <= len(str(n)):
    tmp = C(int(str(n)[i - 1]) - 1, 1)
    for j in range(1, i):
        tmp *= C(int(str(n)[j]) - 1, 1)
    print(tmp)
    res += tmp * C(len(str(n)) - i, k - i) * A(9, k - i)
    i += 1

print(res)
