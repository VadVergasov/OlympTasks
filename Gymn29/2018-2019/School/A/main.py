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
n = input()
n = int(n)
# something
import math

l = 0
r = n

while l != r - 1:
    pos = math.ceil((l + r) / 2.0)
    sum = 0
    if pos % 2 == 0:
        sum = pos / 2 * (pos + 1)
    else:
        sum = pos * ((pos + 1) / 2)
    if sum <= n:
        l = math.floor((l + r) / 2.0)
    else:
        r = math.floor((l + r) / 2.0)

if abs(n - l * (l + 1) / 2) < abs(n - r * (r + 1) / 2) or n - r * (r + 1) / 2 < 0:
    print(l)
else:
    print(r)
