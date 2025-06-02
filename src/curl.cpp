#include <string>
#include "include/curl.hpp"

using std::string;

Curl::Curl() {
    CURLcode code;

    code = curl_global_init(CURL_GLOBAL_ALL); //verify code
    handle = curl_easy_init();
}

Curl::~Curl() {
    curl_easy_cleanup(handle);
    curl_global_cleanup();
}

CURL* Curl::getHandle() const {
    return handle;
}

size_t Curl::write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
    ((string*)userp)->append((char*)buffer, size * nmemb);
    return size * nmemb;
}