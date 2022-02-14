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
import subprocess, random

n = int(input())

for i in range(n):
    ni = random.randint(1, 3)
    s = ""
    s = str(ni) + "\n"
    for j in range(ni):
        s += str(random.randint(-1000, 1000)) + " "
    f = open("i.t", "w")
    f.write(s)
    f.close()
    inp = open("i.t", "r")
    out = open("o.t", "w")
    print("broot")
    subprocess.call("broot", stdin=inp, stdout=out)
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
        print(res, res2)
        print(s)
        break
    r.close()
