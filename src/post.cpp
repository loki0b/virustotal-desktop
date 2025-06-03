#include "post.hpp"

Post::Post() {
    ;
}

Post::~Post() {
    ;
}

void Post::request() {
    CURLcode ret;

    this->initHandle();
    // setHeader()
    curl_easy_setopt(this->handle, CURLOPT_WRITEDATA, write_data);
    curl_easy_setopt(this->handle, CURLOPT_URL, url);
    curl_easy_setopt(this->handle, CURLOPT_CUSTOMREQUEST, POST);
    curl_easy_setopt(this->handle, CURLOPT_HTTPHEADER, this->header);
    curl_easy_setopt(this->handle, CURLOPT_POSTFIELDS, this->body);

    ret = curl_easy_perform(this->handle);
    this->cleanHandle();
}




