a, b = map(int, input().split(" "))

if b * 9 < a:
    print(-1)
    exit()
else:
    mx = ""
    s = a
    num = b
    while s - 9 >= 0:
        mx += "9"
        s -= 9
        num -= 1
    if num > 0:
        mx += (str)(s)
        num -= 1
    mx += "0" * num
    mx = (int)(mx)
    mn = (int)((str)(mx)[::-1])
    print(mx - mn)
