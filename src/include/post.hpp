#ifndef POST_HPP
#define POST_HPP

#include "request.hpp"

class Post : public Request {
private:
public:
    Post();
    ~Post() override;
};

#endif