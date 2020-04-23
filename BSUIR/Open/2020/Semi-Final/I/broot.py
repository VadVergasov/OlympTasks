import subprocess


def solve(n, a):
    return a ** (2 ** n) % 2 ** (n + 2)


for i in range(1, 100):
    for j in range(1, 100):
        with open("inp.txt", "w") as f:
            f.write(str(i) + " " + str(j))
        inp = open("inp.txt", "r")
        out = open("out.txt", "w")
        subprocess.call("main", stdin=inp, stdout=out)
        inp.close()
        out.close()
        ans = ""
        with open("out.txt", "r") as f:
            ans = f.read()
        if int(ans) != solve(i, j):
            print(i, j)
