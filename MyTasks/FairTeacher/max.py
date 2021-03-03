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
f = open("max.txt", "w")
n = 100000
k = 1000

s = str(n) + " " + str(k) + "\n"

for i in range(n - 1):
    s += "100000 "

s += "100000\n"

for i in range(n - 1):
    s += "1000 "

s += "1000\n"

f.write(s)
f.close()
