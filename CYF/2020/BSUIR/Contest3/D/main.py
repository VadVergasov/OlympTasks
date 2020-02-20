t = int(input())

for i in range(t):
    inp = input().split(" ")
    n = int(inp[0])
    q = int(inp[1])
    x = 0
    was = set()
    was.add(1)
    for j in range(q):
        inp = input().split(" ")
        c = 0
        query = False
        if inp[0] == "!":
            query = True
            c = int(inp[1])
        if query:
            mod = pow(2, n)
            x = (x % mod + pow(2, c, mod)) % mod
            num = 1
            path = str(bin(x)[2:])
            path = path.zfill(n)
            for k in path:
                num *= 2
                num += int(k)
                was.add(num)
        else:
            print(len(was))
