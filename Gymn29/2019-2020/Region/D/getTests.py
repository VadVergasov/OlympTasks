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
import os
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.common.action_chains import ActionChains
from selenium.webdriver.chrome.options import Options

from multiprocessing import Pool

import time


def do(*args):
    chrome_options = Options()
    chrome_options.add_argument("--headless")
    chrome_options.binary_location = (
        "C:\Program Files (x86)\Google\Chrome\Application\Chrome.exe"
    )

    driver = webdriver.Chrome(
        executable_path=os.path.abspath("chromedriver"), options=chrome_options
    )

    driver.get("https://acm.bsu.by/login/")

    username = driver.find_element_by_id("id_auth-username")
    username.send_keys("Y19J9")

    password = driver.find_element_by_id("id_auth-password")
    password.send_keys("MC823mcW")

    submit = driver.find_element_by_css_selector(".btn.btn-primary")
    submit.click()

    time.sleep(3)

    number, first, last = input().split(" ")

    for i in range(int(first), int(last) + 1):
        driver.get(
            "https://acm.bsu.by/solutions/"
            + str(number)
            + "/tests/"
            + str(i)
            + "/input.txt"
        )
        with open(os.getcwd() + "/Tests/" + str(i - int(first) + 1) + ".in", "w") as f:
            f.write(driver.find_elements_by_xpath("//pre")[0].text)

        time.sleep(1)

        driver.get(
            "https://acm.bsu.by/solutions/"
            + str(number)
            + "/tests/"
            + str(i)
            + "/answer.txt"
        )

        with open(os.getcwd() + "/Tests/" + str(i - int(first) + 1) + ".out", "w") as f:
            f.write(driver.find_elements_by_xpath("//pre")[0].text)


do()
