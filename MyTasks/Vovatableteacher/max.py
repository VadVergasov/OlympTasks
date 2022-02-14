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
import random

f = open("max.txt", "w")

n = 1000000
H = pow(2, 32) - 1
q = 100000

s = str(n) + " " + str(H) + " " + str(q) + "\n"

for i in range(n):
    s += str(random.randint(1, H)) + " "

s += "\n"

for i in range(q):
    s += "500000 500000 " + str(random.randint(1, H)) + "\n"

f.write(s)
f.close()
