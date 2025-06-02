#include "include/request.hpp"

void Request::addHeaders() {
    return;
}

void Request::post(std::string post_data) {
    CURLcode code;

    curl_easy_setopt(curl.getHandle(), CURLOPT_CUSTOMREQUEST, POST);
    curl_easy_setopt(curl.getHandle(), CURLOPT_WRITEFUNCTION, curl.write_data);
    curl_easy_setopt(curl.getHandle(), CURLOPT_URL, url);
    curl_easy_setopt(curl.getHandle(), CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(curl.getHandle(), CURLOPT_POSTFIELDS, post_data);

    code = curl_easy_perform(curl.getHandle());
}