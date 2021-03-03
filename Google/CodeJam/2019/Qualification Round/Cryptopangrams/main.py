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
import math

t = int(input())

for i in range(t):
    n, l = list(map(int, input().split(" ")))
    lst = list(map(int, input().split(" ")))
    all_p = set()
    each = []
    for j in range(l - 1):
        cur = math.gcd(lst[j], lst[j + 1])
        if j == 0:
            each.append(lst[j] / cur)
            all_p.add(lst[j] / cur)
        all_p.add(cur)
        each.append(cur)
        if j == l - 2:
            each.append(lst[j + 1] / cur)
            all_p.add(lst[j + 1] / cur)
    all_p = sorted(all_p)
    out = "Case #" + str(i + 1) + ": "
    for j in range(l + 1):
        num = 0
        for x in all_p:
            if x == each[j]:
                break
            num += 1
        sym = chr(ord("A") + num)
        out += sym
    print(out)
