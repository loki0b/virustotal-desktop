#include <string>
#include "curl.hpp"

using std::string;

Curl::Curl() {
    CURLcode code;

    code = curl_global_init(CURL_GLOBAL_ALL); //verify code
}

Curl::~Curl() {
    curl_global_cleanup();
}

size_t Curl::write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
    ((string*)userp)->append((char*)buffer, size * nmemb);
    return size * nmemb;
}