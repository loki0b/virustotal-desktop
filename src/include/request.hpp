#ifndef REQUEST_H
#define REQUEST_H

#define POST "POST"

#include <string>
#include "include/curl.hpp"

class Request {
public:
    Curl curl;
    std::string url; 
    struct curl_slist *headers;

    void get();
    void post(std::string post_data);
    void addHeaders();
};

#endif