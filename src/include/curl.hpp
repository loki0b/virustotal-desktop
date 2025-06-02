#ifndef CURL_HPP
#define CURL_HPP

#include <curl/curl.h>

class Curl {
public:
    Curl();
    ~Curl();
    CURL* getHandle() const;
    static size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);
private:
    CURL *handle;
};

#endif