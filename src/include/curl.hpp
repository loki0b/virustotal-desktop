#ifndef CURL_HPP
#define CURL_HPP

#include <curl/curl.h>

class Curl {
public:
    Curl();
    ~Curl();
    static size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);
    void newHandle();
    void deleteHandle();
private:
};

#endif