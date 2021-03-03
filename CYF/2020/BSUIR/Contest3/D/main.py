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
t = int(input())

for i in range(t):
    inp = input().split(" ")
    n = int(inp[0])
    q = int(inp[1])
    x = 0
    was = set()
    was.add(1)
    for j in range(q):
        inp = input().split(" ")
        c = 0
        query = False
        if inp[0] == "!":
            query = True
            c = int(inp[1])
        if query:
            mod = pow(2, n)
            x = (x % mod + pow(2, c, mod)) % mod
            num = 1
            path = str(bin(x)[2:])
            path = path.zfill(n)
            for k in path:
                num *= 2
                num += int(k)
                was.add(num)
        else:
            print(len(was))
