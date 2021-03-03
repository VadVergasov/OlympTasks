"""
Main code for this task.
Copyright (C) 2021  Vadim Vergasov aka VadVergasov
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""
import subprocess, random

n = int(input())

for i in range(n):
    ni = random.randint(2, 10)
    q = random.randint(1, 10)
    s = "1\n"
    s += str(ni) + " " + str(q) + "\n"
    for j in range(q):
        if j % 2 == 0:
            s += "! " + str(random.randint(1, ni - 1)) + "\n"
        else:
            s += "?\n"
    f = open("i.t", "w")
    f.write(s)
    f.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("broot")
    subprocess.call("py main.py", stdin=inp, stdout=out)
    out.close()
    inp.close()
    r = open("o.t", "r")
    res = r.read()
    r.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("normal")
    subprocess.call("main", stdin=inp, stdout=out)
    out.close()
    inp.close()
    r = open("o.t", "r")
    res2 = r.read()
    if res2 != res:
        print("broot")
        print(res)
        print("normal")
        print(res2)
        print("input")
        print(s)
        break
    r.close()
