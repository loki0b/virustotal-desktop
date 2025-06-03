#include <curl/curl.h>
#include "get.hpp"

using std::string;

Get::Get() {
    ;
}

Get::~Get() {
    ;
}

void Get::request() {
    CURL *hnd;
    CURLcode ret;

    hnd = curl_easy_init();

    curl_easy_setopt(hnd, CURLOPT_URL, url);
    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, GET);
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(hnd, CURLOPT_WRITEDATA, write_data);
    

    ret = curl_easy_perform(hnd);
}