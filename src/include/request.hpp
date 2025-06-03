#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <string>
#include <curl/curl.h>

class Request {
private:
protected:
    CURL* handle;
    std::string url;
    struct curl_slist *header;

    size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);
    void setUrl(string url);
    void setHeader(string *headers);
    void initHandle();
    void cleanHandle();
public:
    Request();
    virtual ~Request();
    virtual void request();
};

#endif