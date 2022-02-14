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
import random
import subprocess

for a in range(1, 11):
    for k in range(2, 11):
        for b in range(1, 11):
            for m in range(2, 11):
                for x in range(1, 10):
                    with open("forest.in", "w") as f:
                        f.write(
                            str(a)
                            + " "
                            + str(k)
                            + " "
                            + str(b)
                            + " "
                            + str(m)
                            + " "
                            + str(x)
                        )

                    inp = open("forest.in", "r")
                    out = open("forest.out", "w")

                    subprocess.call("broot", stdin=inp, stdout=out)

                    inp.close()
                    out.close()
                    answer = ""
                    with open("forest.out", "r") as f:
                        answer = f.read()

                    subprocess.call("main")

                    res = ""
                    with open("forest.out", "r") as f:
                        res = f.read()

                    if res != answer:
                        print(a, k, b, m, x)
                        print("reses")
                        print(res, answer)
