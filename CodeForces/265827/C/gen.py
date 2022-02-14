"""
Main code to add GPLv3 preamble.
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

fl = open("test.txt", "w")
n, m = random.randint(1, 10000), random.randint(1, 10000)
a = []
for i in range(n):
    a.append(random.randint(1, 10 ** 9))

q = []
for i in range(m):
    l = random.randint(1, 10 ** 9)
    r = random.randint(l, 10 ** 9)
    q.append([l, r])

text = str(n) + " " + str(m) + "\n"
for i in a:
    text += str(i) + " "

text += "\n"
for i in q:
    text += str(i[0]) + " " + str(i[1]) + "\n"

fl.write(text)
