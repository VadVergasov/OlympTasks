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
import subprocess
import time

total_time = 0.0

for i in range(10):
    subprocess.call("py max.py")
    inp = open("max.txt", "r")
    out = open("output.txt", "w")
    start = time.time()
    subprocess.call("main", stdin=inp, stdout=out)
    end = time.time()
    total_time += end - start
    inp.close()
    out.close()

print(total_time)
