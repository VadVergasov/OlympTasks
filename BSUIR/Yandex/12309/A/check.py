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
    n1 = random.randint(1, 10)
    s = random.randint(1, 100)
    st = str(n1) + " " + str(s) + "\n"
    for j in range(n1):
        st += str(random.randint(1, 20)) + " 2\n"
    f = open("castle.in", "w")
    f.write(st)
    f.close()
    inp = open("castle.in", "r")
    out = open("castle.out", "w")
    subprocess.call("another")
    inp.close()
    out.close()
    f = open("castle.out", "r")
    res = f.read()
    f.close()
    inp = open("castle.in", "r")
    out = open("castle.out", "w")
    subprocess.call("main")
    inp.close()
    out.close()
    f = open("castle.out", "r")
    r = f.read()
    f.close()
    if r != res:
        print(st)
