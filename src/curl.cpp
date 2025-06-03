#include "curl.hpp"

using std::string;

Curl::Curl() {
    CURLcode code;

    code = curl_global_init(CURL_GLOBAL_ALL); //verify code
}

Curl::~Curl() {
    curl_global_cleanup();
}