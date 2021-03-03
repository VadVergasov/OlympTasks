"""
Main code to add GPLv3 preamble.
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
import os

with open("preamble.txt", "r") as f:
    lic = f.read()


exclude = set([".git", ".vscode"])
for root, dirs, files in os.walk(".", topdown=True):
    dirs[:] = [d for d in dirs if d not in exclude]
    for fl in files:
        if fl[-2:] == "py":
            print(root, files)
            source = ""
            with open(root + "\\" + fl, "r") as f:
                source = f.read()
            source = lic + "\n" + source
            with open(root + "\\" + fl, "w") as f:
                f.write(source)
