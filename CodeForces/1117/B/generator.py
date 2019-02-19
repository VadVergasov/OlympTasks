import subprocess, random, os

for i in range(100):
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "w")
    n = str(random.randint(2, 2 * 1e5))
    k = str(random.randint(1, 2 * 1e9))
    m = str(random.randint(1, 2 * 1e9))
    s = ""
    for j in range(int(n)):
        s += str(random.randint(0, 1e9))
        s += " "
    fi.write(n + " " + k + " " + m + " " + "\n" + s)
    fi.close()
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "r")
    fo = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".o"), "w")
    subprocess.call("main", stdin=fi, stdout=fo)
    fo.close()
    fi.close()
