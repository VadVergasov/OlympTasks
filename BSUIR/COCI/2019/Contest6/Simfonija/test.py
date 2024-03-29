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
import random

s = "100000 "

s += str(random.randint(0, 100000)) + "\n"

for i in range(100000):
    s += str(random.randint(-1e9, 1e9)) + " "

s += "\n"

for i in range(100000):
    s += str(random.randint(-1e9, 1e9)) + " "

f = open("t.txt", "w")
f.write(s)
f.close()
