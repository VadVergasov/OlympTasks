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
    f = open("t.i", "w")
    a = random.randint(1, 1e8)
    s = str(a) + " "
    print(a)
    for j in range(a):
        s += str(random.randint(1, 1e10)) + " "
    b = random.randint(1, 1e8)
    s += str(b) + " "
    print(b)
    for j in range(b):
        s += str(random.randint(1, 1e8)) + " "
    f.write(s)
    f.close()
    i = open("t.i", "r")
    out = open("t.o", "w")
    subprocess.call("main", stdin=i, stdout=out)
