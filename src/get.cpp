#include "get.hpp"

using std::string;

Get::Get() {
    ;
}

Get::~Get() {
    ;
}

void Get::request() {
    CURLcode ret;

    this->initHandle();
    // setHeader()
    curl_easy_setopt(this->handle, CURLOPT_WRITEDATA, write_data);
    curl_easy_setopt(this->handle, CURLOPT_URL, url);
    curl_easy_setopt(this->handle, CURLOPT_CUSTOMREQUEST, GET);
    curl_easy_setopt(this->handle, CURLOPT_HTTPHEADER, this->header);
    
    

    ret = curl_easy_perform(this->handle);
    this->cleanHandle();
}