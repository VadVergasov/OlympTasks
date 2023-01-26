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
#include <curl/curl.h>

#include <iostream>
#include <string>

#include "json.hpp"

size_t writeFunction(void* ptr, size_t size, size_t nmemb, std::string* data) {
    data->append((char*)ptr, size * nmemb);
    return size * nmemb;
}

int main() {
    using json = nlohmann::json;
    std::string server, port;
    int a, b;
    std::cin >> server >> port >> a >> b;
    curl_global_init(CURL_GLOBAL_DEFAULT);
    auto curl = curl_easy_init();

    if (curl) {
        std::string request_str = server + ":" + port +
                                  "?a=" + std::to_string(a) +
                                  "&b=" + std::to_string(b);
        curl_easy_setopt(curl, CURLOPT_URL, request_str.c_str());
        curl_easy_setopt(curl, CURLOPT_NOPROGRESS, 1L);
        curl_easy_setopt(curl, CURLOPT_MAXREDIRS, 50L);
        curl_easy_setopt(curl, CURLOPT_TCP_KEEPALIVE, 1L);

        std::string response_string;
        std::string header_string;
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeFunction);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_string);
        curl_easy_setopt(curl, CURLOPT_HEADERDATA, &header_string);

        auto res = curl_easy_perform(curl);

        json payload;
        payload = json::parse(response_string);

        long long result = 0;
        for (const auto element : payload) {
            const auto numeric = element.get<int>();
            result += numeric;
        }
        std::cout << result;

        curl_easy_cleanup(curl);
        curl = NULL;
    }
    curl_global_cleanup();
    return 0;
}
