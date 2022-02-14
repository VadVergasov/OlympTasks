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
import random
import time

t = 1000
n = []
for i in range(t):
    n.append(random.randint(1e17, 1e18))

with open("input.txt", "w") as f:
    out = str(t) + "\n"
    out += str(n)[1:-1].replace(", ", " ")
    f.write(out)

start = time.time()
inp = open("input.txt", "r")
subprocess.call("main.exe", stdin=inp, stdout=None)
end = time.time()

print(end - start)
