#pragma once
#include <pycom/interface/NodeVisitorInterface.hpp>

class VisitableNodeInterface
{
public:
    virtual void accept(NodeVisitorInterface *visitor) = 0;
};
