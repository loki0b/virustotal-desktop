#include <string>
#include <curl/curl.h>
#include "request.hpp"

using std::string;

size_t Request::write_data(void *buffer, size_t size, size_t nmemb, void *userp) {
    ((string*)userp)->append((char*)buffer, size * nmemb);
    return size * nmemb;
}

void Request::setUrl(string url) {
    this->url = url; 
}

void Request::setHeader(string *headers) {
    int i, n;

    // n = N(headers)
    i = 0;
    while (i < n) {
        this->headers = curl_slist_append(this->headers, headers[i].c_str());
    }
}