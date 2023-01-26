// Main code for this task.
// Copyright (C) 2022  Vadzim Verhasau aka VadVergasov
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
#include <regex>

#include "httplib.h"
#include "json.hpp"

std::pair<bool, std::string> verify(const std::string phone) {
    std::regex phone_regex(
        "(\\+7|8){1}( (\\(([0-9]{3})\\)|[0-9]{3}) "
        "|(\\(([0-9]{3})\\)|[0-9]{3}))([0-9]{3})( |-)?([0-9]{2}) ?([0-9]{2})");
    std::cmatch result;
    std::regex_match(phone.c_str(), result, phone_regex);
    if (result.empty()) {
        return {false, ""};
    }
    std::string code;
    if (result[5].matched) {
        code = result[5];
    } else if (result[4].matched) {
        code = result[4];
    } else {
        code = result[3];
    }
    std::string normalized = "+7-" + code + "-" + std::string(result[7]) + "-" +
                             std::string(result[9]) + std::string(result[10]);
    if (code != "982" && code != "986" && code != "912" && code != "934") {
        return {false, ""};
    }
    return {true, normalized};
}

std::string get_json(bool res, const std::string& phone = "") {
    using json = nlohmann::json;
    json result;
    if (!phone.empty()) {
        result["normalized"] = phone;
    }
    result["status"] = res;
    return result.dump();
}

int main() {
    httplib::Server svr;
    svr.Get("/ping", [](const httplib::Request&, httplib::Response& res) {
        res.status = 200;
        res.set_content("[1,2,3,4]", "application/json");
    });
    svr.Get("/validatePhoneNumber",
            [](const httplib::Request& req, httplib::Response& res) {
                if (!req.has_param("phone_number")) {
                    res.set_content("No phone number", "text/plain");
                    res.status = 400;
                    return;
                }
                try {
                    std::string phone = req.get_param_value("phone_number");
                    auto result = verify(phone);
                    res.set_content(get_json(result.first, result.second),
                                    "application/json");
                } catch (const std::exception& error) {
                    res.set_content(error.what(), "text/plain");
                    res.status = 400;
                }
            });
    svr.Get("/shutdown", [&](const httplib::Request&, httplib::Response& res) {
        svr.stop();
    });
    svr.listen("0.0.0.0", 7777);
    return 0;
}
