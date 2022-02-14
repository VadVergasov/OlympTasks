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
import subprocess


def solve(n, a):
    return a ** (2 ** n) % 2 ** (n + 2)


for i in range(1, 100):
    for j in range(1, 100):
        with open("inp.txt", "w") as f:
            f.write(str(i) + " " + str(j))
        inp = open("inp.txt", "r")
        out = open("out.txt", "w")
        subprocess.call("main", stdin=inp, stdout=out)
        inp.close()
        out.close()
        ans = ""
        with open("out.txt", "r") as f:
            ans = f.read()
        if int(ans) != solve(i, j):
            print(i, j)
