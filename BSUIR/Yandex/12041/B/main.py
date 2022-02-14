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
import sys

n = 10000000

state = list("1" * n)

for i in range(2, n + 1):
    for j in range(i, n, i):
        state[j] = chr(ord(state[j]) + 1)
        if state[j] == "6":
            state[j] = "0"

res = 0
for i in range(1, n + 1):
    if state[i] == "1":
        res += 1
        sys.stdout.write(str(i) + ", ")
print()
print(res)
