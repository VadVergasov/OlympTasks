import subprocess, os

res = 0

for i in range(100):
    f = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".o"), "r")
    right = f.readlines()
    f.close()
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "r")
    fo = open(os.path.abspath(os.getcwd() + "/tests/cur.txt"), "w")
    subprocess.call("main", stdin=fi, stdout=fo)
    fi.close()
    fo.close()
    fo = open(os.path.abspath(os.getcwd() + "/tests/cur.txt"), "r")
    out = fo.readlines()
    fo.close()
    if out in right:
        print("Test number " + str(i + 1) + " not correct")
    else:
        print("OK")
        res += 1

print(res / 100)
