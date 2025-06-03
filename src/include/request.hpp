#ifndef REQUEST_HPP
#define REQUEST_HPP

#include <string>

class Request {
private:
protected:
    std::string url;
    struct curl_slist *headers;

    size_t write_data(void *buffer, size_t size, size_t nmemb, void *userp);
    void setUrl(string url);
    void setHeader(string *headers);
public:
    Request();
    virtual ~Request();
    virtual void request();
};

#endif