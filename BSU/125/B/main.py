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
n, x = [int(x) for x in input().split()]

a = []
b = []

for i in range(n):
    s = input().split()
    a.append(int(s[0]))
    b.append(int(s[1]))

for i in range(0, n):
    up = 1
    down = 1
    for j in range(i, n):
        up *= a[j]
        down *= b[j]
        if up == x * down:
            print(i + 1, j + 1)
            exit()

print("0 0")
