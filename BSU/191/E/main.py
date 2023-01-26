from math import ceil, floor, pow


def func(n):
    for a in range(1, 5000):
        for b in range(1, 5000):
            c = (pow(a, n) + pow(b, n)) ** (1.0 / n)
            if ceil(c) == floor(c) and pow(a, n) + pow(b, n) == pow(c, n):
                print(a, b, c, n)
                return


func(-2)
