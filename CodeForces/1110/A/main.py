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
f = open("input.txt", "r")
s = f.readline()

s = s.split(" ")
b = int(s[0])
k = int(s[1])
s = f.readline()
a = s.split(" ")

n = 0
for i in range(k):
    n += int(a[i]) * pow(b, k - i - 1, 10)
    n %= 10

if n % 2 == 0:
    print("even")
else:
    print("odd")
