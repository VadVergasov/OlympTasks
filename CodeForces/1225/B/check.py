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
import subprocess
import random

for i in range(10000):
    s = "1\n"
    n = random.randint(1, 100)
    k = random.randint(1, n)
    s += str(n) + " " + str(random.randint(1, 100)) + " " + str(k) + "\n"
    for i in range(n):
        s += str(random.randint(1, k)) + " "
    f = open("in.txt", "w")
    f.write(s)
    f.close()
    inp = open("in.txt", "r")
    out = open("out.txt", "w")
    subprocess.call("checker", stdin=inp, stdout=out)
    out.close()
    inp.close()
    f = open("out.txt", "r")
    right = f.read()
    f.close()
    inp = open("in.txt", "r")
    out = open("out.txt", "w")
    subprocess.call("main", stdin=inp, stdout=out)
    out.close()
    f = open("out.txt", "r")
    ans = f.read()
    f.close()
    if ans != right or right.find(ans) == -1 or ans.find(right) == -1:
        print(s)

