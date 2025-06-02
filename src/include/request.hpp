#ifndef REQUEST_H
#define REQUEST_H

class Request {
public:
    Request();
    ~Request();
    void setMethod();
    void setUrl();
    void setHeaders();
};

#endif