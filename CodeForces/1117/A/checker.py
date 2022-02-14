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
import subprocess, os

res = 0

for i in range(100):
    f = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".o"), "r")
    right = f.readlines()
    f.close()
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "r")
    fo = open(os.path.abspath(os.getcwd() + "/tests/cur.txt"), "w")
    subprocess.call("main", stdin=fi, stdout=fo)
    fi.close()
    fo.close()
    fo = open(os.path.abspath(os.getcwd() + "/tests/cur.txt"), "r")
    out = fo.readlines()
    fo.close()
    if out != right:
        print("Test number " + str(i + 1) + " not correct")
    else:
        print("OK")
        res += 1

print(res / 100)
