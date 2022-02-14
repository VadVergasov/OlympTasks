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
i = open("INPUT.TXT", "r")

m = i.read().split(" ")

k = int(m[0])
n = int(m[1])

a = [0] * (n + k)

a[k] = 1

for i in range(k + 1, 2 * k, 1):
    for j in range(i, k - 1, -1):
        a[i] += a[j]
    a[i] += 1

for i in range(2 * k, n + k):
    for j in range(1, k + 1):
        a[i] += a[i - j]

o = open("OUTPUT.TXT", "w")
o.write(str(a[len(a) - 1]))
