#ifndef GET_HPP
#define GET_HPP

#include <string>
#include "request.hpp"

#define GET "GET"

class Get : public Request {
private:
protected:
public:
    Get();
    ~Get() override;
    void request() override;
};

#endif