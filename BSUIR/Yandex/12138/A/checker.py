"""
Main code for this task.
Copyright (C) 2021  Vadzim Verhasau aka VadVergasov
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
import subprocess, random, math, datetime

n = int(input())

for i in range(n):
    a = random.randint(1, 1e5)
    b, c = (random.randint(1, a), min(random.randint(1, 1e9), math.factorial(a)))
    f = open("t.i", "w")
    f.write(str(a) + " " + str(b) + " " + str(c))
    f.close()
    i = open("t.i", "r")
    out = open("t.o", "w")
    s = datetime.datetime.now()
    to = subprocess.call("broot", stdin=i, stdout=out)
    e = datetime.datetime.now()
    print("broot", (e - s))
    if to != 0:
        continue
    out.close()
    res = open("t.o", "r")
    r = res.read()
    res.close()
    out = open("t.o", "w")
    i.close()
    i = open("t.i", "r")
    s = datetime.datetime.now()
    subprocess.call("main", stdin=i, stdout=out)
    e = datetime.datetime.now()
    print((e - s))
    out.close()
    ans = open("t.o", "r")
    ret = ans.read()
    ans.close()
    if ret != r:
        print(a, b, c, "not correct")
