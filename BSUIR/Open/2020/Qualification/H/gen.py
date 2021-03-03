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
cur = "11"

ends = {}

s = '"1",\n"11",\n'

num = 2

while len(cur) < 100000:
    if num > 30:
        if not cur[len(cur) - 1000 :] in ends.keys():
            ends[cur[len(cur) - 1000 :]] = []
        ends[cur[len(cur) - 1000 :]].append(num)
    i = 0
    cnt = 1
    nxt = ""
    while i < len(cur):
        while i + 1 < len(cur) and cur[i] == cur[i + 1]:
            i += 1
            cnt += 1
        nxt += str(cnt) + cur[i]
        i += 1
        cnt = 1
    cur = nxt
    s += '"' + cur + '"' + ",\n"
    num += 1

for i in ends:
    print('"' + i + '",')

with open("nums.txt", "w") as f:
    f.write(s)
