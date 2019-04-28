import math

t = int(input())

for i in range(t):
    n, l = list(map(int, input().split(" ")))
    lst = list(map(int, input().split(" ")))
    all_p = set()
    each = []
    for j in range(l - 1):
        cur = math.gcd(lst[j], lst[j + 1])
        if j == 0:
            each.append(lst[j] / cur)
            all_p.add(lst[j] / cur)
        all_p.add(cur)
        each.append(cur)
        if j == l - 2:
            each.append(lst[j + 1] / cur)
            all_p.add(lst[j + 1] / cur)
    all_p = sorted(all_p)
    out = "Case #" + str(i + 1) + ": "
    for j in range(l + 1):
        num = 0
        for x in all_p:
            if x == each[j]:
                break
            num += 1
        sym = chr(ord("A") + num)
        out += sym
    print(out)
