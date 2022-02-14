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
import subprocess, random, os

for i in range(100):
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "w")
    n = str(random.randint(1, 1e5))
    s = ""
    for j in range(int(n)):
        s += str(random.randint(0, 1e9))
        s += " "
    fi.write(n + "\n" + s)
    fi.close()
    fi = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".i"), "r")
    fo = open(os.path.abspath(os.getcwd() + "/tests/" + str(i + 1) + ".o"), "w")
    subprocess.call("main", stdin=fi, stdout=fo)
    fo.close()
    fi.close()
