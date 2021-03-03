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

for i in range(100000):
    a = random.randint(1, 1000)
    b = random.randint(1, 1000)
    n = random.randint(1, 1000000)
    k = random.randint(1, 1000000)
    s = str(a) + " " + str(b) + " " + str(n) + " " + str(k)
    with open("input.txt", "w") as f:
        f.write(s)
        f.close()
    subprocess.call("cheker")
    ans = ""
    with open("output.txt", "r") as f:
        ans = f.read()
        f.close()
    subprocess.call("main")
    res = ""
    with open("output.txt", "r") as f:
        res = f.read()
        f.close()
    if ans != res:
        print(s, ans, res)

