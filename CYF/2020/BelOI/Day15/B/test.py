import random
import subprocess

for a in range(1, 11):
    for k in range(2, 11):
        for b in range(1, 11):
            for m in range(2, 11):
                for x in range(1, 10):
                    with open("forest.in", "w") as f:
                        f.write(
                            str(a)
                            + " "
                            + str(k)
                            + " "
                            + str(b)
                            + " "
                            + str(m)
                            + " "
                            + str(x)
                        )

                    inp = open("forest.in", "r")
                    out = open("forest.out", "w")

                    subprocess.call("broot", stdin=inp, stdout=out)

                    inp.close()
                    out.close()
                    answer = ""
                    with open("forest.out", "r") as f:
                        answer = f.read()

                    subprocess.call("main")

                    res = ""
                    with open("forest.out", "r") as f:
                        res = f.read()

                    if res != answer:
                        print(a, k, b, m, x)
                        print("reses")
                        print(res, answer)
