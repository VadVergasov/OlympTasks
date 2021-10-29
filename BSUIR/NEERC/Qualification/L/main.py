# Main code for this task.
# Copyright (C) 2021  Vadim Vergasov aka VadVergasov
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
x = str(input())
y = x
z = x
y = y[-1] + y[:-1]
z = z[1:] + z[0]
print(int(x + y + z) % 3)
