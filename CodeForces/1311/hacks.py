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
"""
Trying to hack someones solution on codeforces.com
"""
import hashlib
import os
import subprocess
import time

import requests
from lxml import html

CURRENT = time.time()

HASHED = hashlib.sha512(
    (
        "123123/contest.standings?apiKey=ef7b7be1aa2578ef4d9b739570917363f2d68942&contestId="
        + str(1311)
        + "&showUnofficial=false&time="
        + str(int(CURRENT))
        + "#0cfae1da7f21c7aa91da3ecbff2eb5a8d7373fd8"
    ).encode("utf-8")
)

REQUEST = requests.get(
    "https://codeforces.com/api/contest.standings?contestId="
    + str(1311)
    + "&showUnofficial=false&apiKey=ef7b7be1aa2578ef4d9b739570917363f2d68942&time="
    + str(int(CURRENT))
    + "&apiSig=123123"
    + str(HASHED.hexdigest())
)

RESPONSE = REQUEST.json()

TESTS = {
    "A": [
        "100\n884683620 130208912\n155242905 316481856\n546178289 872549800\n745334866 247561370\n899921335 142390724\n564146968 174516053\n409313340 198177212\n729454877 468116953\n755839504 507390737\n847383492 218258828\n914181458 451688898\n497395826 741164750\n801248684 690406114\n577843248 279375479\n756421594 737783291\n909590105 467700355\n264770924 594369266\n172508887 461740034\n812468577 942039655\n792995116 632854954\n975049913 353174218\n630874115 703319446\n405246857 937782360\n192372859 753229769\n186209707 158934630\n851184956 111131261\n359592717 481501833\n229050294 638434162\n291792748 497052788\n944965353 131803391\n593639648 207939316\n945982971 219968289\n896373457 471785388\n365887449 348188289\n445011506 837617053\n112584518 587222174\n736086258 111533293\n721855691 686275691\n144737490 820599749\n235077911 290284964\n761272150 203138336\n980606998 400408413\n226759206 642823961\n155644899 306031963\n799375317 245199510\n166868829 310228010\n571697803 834918795\n142860598 176870240\n893612270 201285445\n261396124 932270434\n535014687 158536599\n783600312 260297714\n400868515 155973897\n324183975 337183567\n986278459 993323685\n355112987 652138731\n699400673 541993692\n859826003 333671475\n252777906 254717896\n864236502 437170206\n247735590 809217055\n882976011 777926431\n237095551 278364469\n238702488 661232820\n490786521 251673754\n445185608 167923862\n974938773 731900207\n807677926 562721898\n493130285 938695701\n932750098 213193083\n714266510 613579558\n436447622 579824451\n441744392 303304552\n422174757 439625119\n425191197 372066092\n685982559 576023463\n586390194 526015524\n192660740 871287184\n297689396 277450403\n893734984 718400550\n400814551 965256481\n376664305 895315541\n782402446 616763190\n649332217 658400482\n590345021 325094596\n534516566 108851980\n193826494 513107898\n849935928 897584946\n335620895 262154468\n801114057 445675298\n447287769 164416966\n635241577 283528910\n513243779 279561830\n715292965 113258559\n794543881 690380053\n655015607 149571823\n520156441 544324487\n580774476 588947105\n770227045 548971451\n241250972 464270865\n"
    ],
    "B": [],
    "C": [],
    "D": [],
    "E": [],
    "F": [],
}

CHECKERS = {
    "A": "71769822",
    "B": "71773376",
    "C": "71776130",
    "D": "71779991",
    "E": "71799696",
    "F": "71786192",
}

PREFIX = "hacking/"

os.mkdir(PREFIX)

for i in CHECKERS:
    solutionPage = requests.get(
        "https://codeforces.com/contest/1311/submission/" + str(CHECKERS[i])
    )
    tree2 = html.fromstring(solutionPage.text)
    code = tree2.xpath('//*[@id="pageContent"]/div[3]/pre/text()')
    with open(PREFIX + str(i) + ".cpp", "w") as f:
        f.write(code[0])
        f.close()
    subprocess.call(
        "g++ -O2 -static -o " + PREFIX + str(i) + " " + PREFIX + str(i) + ".cpp"
    )
    os.remove(PREFIX + str(i) + ".cpp")

for i in RESPONSE["result"]["rows"]:
    ids = {"A": "", "B": "", "C": "", "D": "", "E": "", "F": ""}
    handle = i["party"]["members"][0]["handle"]
    print(handle)
    CURRENT = time.time()
    HASHED = hashlib.sha512(
        (
            "123123/contest.status?apiKey=ef7b7be1aa2578ef4d9b739570917363f2d68942&contestId="
            + str(1311)
            + "&handle="
            + str(handle)
            + "&time="
            + str(int(CURRENT))
            + "#0cfae1da7f21c7aa91da3ecbff2eb5a8d7373fd8"
        ).encode("utf-8")
    )
    get_submits = requests.get(
        "https://codeforces.com/api/contest.status?apiKey=ef7b7be1aa2578ef4d9b739570917363f2d68942&contestId="
        + str(1311)
        + "&handle="
        + str(handle)
        + "&time="
        + str(int(CURRENT))
        + "&apiSig=123123"
        + str(HASHED.hexdigest())
    )
    res = get_submits.json()
    c = True
    for j in res["result"]:
        if not "GNU" in j["programmingLanguage"]:
            c = False
            break
        if j["author"]["participantType"] != "CONTESTANT":
            continue
        if j["verdict"] != "OK":
            continue
        if ids[j["problem"]["index"]] != "":
            continue
        ids[j["problem"]["index"]] = j["id"]
    if not c:
        continue
    try:
        os.mkdir(PREFIX + handle)
    except FileExistsError as err:
        pass
    for j in ids:
        solutionPage = requests.get(
            "https://codeforces.com/contest/1311/submission/" + str(ids[j])
        )
        tree2 = html.fromstring(solutionPage.text)
        code = tree2.xpath('//*[@id="pageContent"]/div[3]/pre/text()')
        with open(
            PREFIX + str(handle) + "/" + str(j) + ".cpp", "w", encoding="utf-8"
        ) as f:
            f.write(code[0])
            f.close()
        subprocess.call(
            "g++ -O2 -static -std=c++17 -o "
            + PREFIX
            + str(handle)
            + "/"
            + str(j)
            + " "
            + PREFIX
            + str(handle)
            + "/"
            + str(j)
            + ".cpp"
        )
        os.remove(PREFIX + str(handle) + "/" + str(j) + ".cpp")
    # Start checking solutions
    for k in ids:
        for j in TESTS[k]:
            with open(PREFIX + k + ".in", "w") as f:
                f.write(j)
            inp = open(PREFIX + k + ".in", "r")
            out = open(PREFIX + k + ".out", "w")
            subprocess.call(PREFIX + k, stdin=inp, stdout=out)
            out.close()
            with open(PREFIX + k + ".out", "r") as f:
                right = f.read()
            inp.close()
            inp = open(PREFIX + k + ".in", "r")
            out = open(PREFIX + k + ".out", "w")
            try:
                subprocess.run(
                    PREFIX + handle + "\\" + k,
                    stdin=inp,
                    stdout=out,
                    timeout=5,
                    check=True,
                )
            except subprocess.TimeoutExpired as err:
                print(handle, k, "TL")
            except subprocess.SubprocessError as err:
                print(handle, k, "RE", err)
            out.close()
            with open(PREFIX + k + ".out", "r") as f:
                user = f.read()
            if user != right or not user in right or not right in user:
                with open(PREFIX + handle + "_" + k + ".in", "w") as f:
                    f.write(j)
                with open(PREFIX + handle + "_" + k + "right.out", "w") as f:
                    f.write(right)
                with open(PREFIX + handle + "_" + k + "answer.out", "w") as f:
                    f.write(user)
