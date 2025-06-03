#ifndef POST_HPP
#define POST_HPP

#include "request.hpp"

#define POST "POST"

class Post : public Request {
private:
    std::string body;
public:
    Post();
    ~Post() override;
    void request() override;
};

#endif