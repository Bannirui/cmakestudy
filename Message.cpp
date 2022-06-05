//
// Created by dingrui on 2022/6/5.
//

#include "Message.h"
#include <iostream>

std::ostream &Message::printObject(std::ostream &os)
{
    os << "This is my very nice message: " << std::endl;
    os << message_;
    return os;
}
