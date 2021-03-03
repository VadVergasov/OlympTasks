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
a, b = map(int, input().split(" "))

if b * 9 < a:
    print(-1)
    exit()
else:
    mx = ""
    s = a
    num = b
    while s - 9 >= 0:
        mx += "9"
        s -= 9
        num -= 1
    if num > 0:
        mx += (str)(s)
        num -= 1
    mx += "0" * num
    mx = (int)(mx)
    mn = (int)((str)(mx)[::-1])
    print(mx - mn)
