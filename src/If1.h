#pragma once
#include "If2.h"
#include "Cl1.h"

class Cl1; // Попереднє оголошення класу

class If1 : public If2 {
public:
    virtual void meth1() = 0;
};